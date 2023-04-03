#include "main.h"
#define NULL 0
/**
 * _strchr - fuction that locates a charachter in a string
 * @s: string
 * @c: character
 * Return: pointer of the first ocuurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	for (i = 0; i < lenght; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else
		{
			return (NULL);
		}
	}
}
