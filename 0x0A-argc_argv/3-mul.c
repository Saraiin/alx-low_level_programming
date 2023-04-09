#include <stdio.h>
/**
 * main - function main
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int m;

		m = argv[1] * argv[2];
		printf("%d\n", m);
	}
	else
		printf("error");
}
