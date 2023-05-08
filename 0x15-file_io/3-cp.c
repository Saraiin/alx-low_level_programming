#include "main.h"
#define TMP_SIZE 1024
/**
 * main - cp content of a file to another one file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fl_from, fl_to;
	char tmp[TMP_SIZE];
	ssize_t nbrcharead = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fl_from = open(argv[1], O_RDONLY);
	if (fl_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	while ((nbrcharead = read(fl_from, tmp, TMP_SIZE)) > 0)
	{
		if (fl_to < 0 || write(fl_to, tmp, nbrcharead) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nbrcharead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fl_from) == -1 || close(fl_to) == -1)
	{
		if (close(fl_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_from);
		if (close(fl_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to);
		exit(100);
	}
	return (0);
}
