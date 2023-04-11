#include "main.h"
#include <stdlib.h>
/**
 * cntword - cpunts number of wordss in a string
 * @s: string to count
 * Return: number of words
 */
int cntword(char *s)
{
	int i, nw = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				nw++;
		}
		else if (i == 0)
			nw++;
	}
	nw++;
	return (nw);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of words, NULL if fails
 */
char **strtow(char *str)
{
	int i, j, k, l;
	int nw = 0;
	int c = 0;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	nw = cntword(str);
	if (nw == 1)
		return (NULL);
	a[nw - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			a[c] = (char *)malloc(j * sizeof(char));
			j--;
			if (a[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(a[k]);
				free(a[nw - 1]);
				free(a);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				a[c][l] = str[i + l];
			a[c][l] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}
	return (a);
}
