#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (*s != '\0')
	{
		l++;
	}
	for (i = l; i > 0; i--)
	{
		printf("%d", s[i]);
	}
	printf('\n');
}
