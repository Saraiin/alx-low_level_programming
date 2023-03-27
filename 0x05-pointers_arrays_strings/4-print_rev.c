#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		l++;
	}
	for (i = l; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
