#include "main.h"
#include <stdlib.h>
/**
 * strln - return length of string
 * @s: string
 * Return: length
 */
int strln(char *s)
{
	int i;
	int ln = 0;

	for (i = 0; s[i] != '\0'; i++)
		ln++;
	return (ln);
}

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
	ln1 = strln(s1);
	ln2 = strln(s2);
	if (n > ln2)
		n = ln2;
	ln = ln1 + n;
	s = malloc(ln * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ln1; i++)
		s[i] = s1[i];
	for (j = 0; j < ln2 ; j++; i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
