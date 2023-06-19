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
int k = 0;


while (s[k] != '\0')
{
	if (s[k] == c)
		return (&s[k]);
	k++;
}
if (s[k] == c)
	return (&s[k]);
return (NULL);
}
