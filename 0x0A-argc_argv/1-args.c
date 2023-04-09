#include <stdio.h>
/**
 * main - function main
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
