#include "main.h"
/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: name of the file
 * @letters: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptfile;
	char *tmp;
	ssize_t  nbrcharwrite = 0, nbrcharread = 0;

	if (filename == NULL)
		return (0);
	ptfile = open(filename, O_RDONLY);
	if (ptfile == -1)
		return (0);
	tmp = malloc(sizeof(char) * letters);
	if (tmp == NULL)
	{
		close(ptfile);
		return (0);
	}
	nbrcharread = read(ptfile, tmp, letters);
	close(ptfile);
	if (nbrcharread == -1)
	{
		free(tmp);
		return (0);
	}
	nbrcharwrite = write(STDOUT_FILENO, tmp, nbrcharread);
	free(tmp);
	if (nbrcharwrite != nbrcharread)
		return (0);
	return (nbrcharwrite);
}
