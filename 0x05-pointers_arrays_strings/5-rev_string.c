#include "main.h"

/**
  * rev_string - Reverses a string
  * @s:  string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, k;
	char *a, tmp;

	a = s;

	while (s[l] != '\0')
	{
		l++;
	}

	for (k = 1; k < l; k++)
	{
		a++;
	}

	for (i = 0; i < (l / 2); i++)
	{
		tmp = s[i];
		s[i] = *a;
		*a = tmp;
		a--;
	}
}
