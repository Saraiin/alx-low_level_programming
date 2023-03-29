#include "main.h"
/**
 * *_strcat - fanction that appends src string to dest string
 * @dest: first string
 * @src: second string to add to dest
 * Return: new dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenghtdest = 0;

	while (dest[lenghtdest] != '/0')
	{
		lenghtdest++;
	}
	for (i = 0; src[i] != '/0'; i++; lenghtdest++)
	{
		dest[lenghtdest] = src[i];
	}
	dest[lenghtdest] = '/0';
	return (dest);
}
