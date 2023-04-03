#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area pointed to by s
 * @b: constant value
 * @n: number of byte
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
