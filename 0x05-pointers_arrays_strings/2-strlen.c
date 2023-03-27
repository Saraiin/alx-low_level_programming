#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	for ( ; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}
