#include "main.h"
/**
 * _strcat - function that appends src string to dest string
 * @dest: pointer to first string
 * @src: pointer to second string to add to dest
 * Return: pointer to new dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int lenghtdest;
	
	lenghtdest = 0;

	while (dest[lenghtdest] != '\0')
	{
		lenghtdest++;
	}
	for (i = 0; src[i] != '\0'; i++; lenghtdest++)
	{
		dest[lenghtdest] = src[i];
	}
	dest[lenghtdest] = '\0';
	return (dest);
}
