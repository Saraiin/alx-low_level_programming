#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 * Return: NULL if fails, concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ln1 = 0, ln2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ln1])
		ln1++;
	while (s2[ln2])
		ln2++;
	if (n >= ln2)
		n = ln2;
	s = malloc(sizeof(char) * (ln1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ln1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
