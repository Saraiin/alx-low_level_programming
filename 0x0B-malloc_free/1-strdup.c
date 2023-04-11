#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string
 * @str: string to copy
 * Return: Pointer to the duplicated string, NULL if fails
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *c;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;		
	i++;
	c = malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
