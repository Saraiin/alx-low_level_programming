#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of argument passed
 * @argv: array of argument
 * Return: 1 if errors, 0 if success
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
				printf("error\n");
				return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		s += atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
