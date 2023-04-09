#include <stdio.h>
/**
 * main - function main
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 on success, 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int m;

		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
		return (0);
	}
	else
		printf("error\n");
		return (1);
}
