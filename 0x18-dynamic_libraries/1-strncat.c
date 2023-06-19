#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ldest, j;

	ldest = 0;
	while (dest[ldest] != '\0')
	{
		ldest++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, ldest++)
	{
		dest[ldest] = src[j];
	}
	dest[ldest] = '\0';
	return (dest);
}
