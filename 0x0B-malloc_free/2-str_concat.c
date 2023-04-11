#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated spac, NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, a;
	char *ns;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;

	ns = malloc(k * sizeof(char));
	if (ns == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		ns[a] = s1[a];
	for (a = 0; a < j; a++)
		ns[a + i] = s2[a];
	ns[i + j] = '\0';
	return (ns);
}
