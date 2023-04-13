#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of byte
 * Return: NULL if fails, concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ln, ln1, ln2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ln1] != '\0')
		ln1++;
	while (s2[ln2] != '\0')
		ln2++;
	if (n > ln2)
		n = ln2;
	ln = ln1 + n;
	s = malloc(sizeof(char) * ln + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ln1; i++)
		s[i] = s1[i];
	for (j = 0; j < ln2 ; j++; i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
