#include "main.h"
/**
 * slen - lenth of string
 * @s: string
 * Return: length of s
 */
int slen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + slen(s + 1));
}

/**
 * check_pldrm - check if string is palindrome
 * @a: left index
 * @b: right index
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int check_pldrm(int a, int b, char *s)
{
	if (a >= b)
		return (1);
	else if (s[a] != s[b])
		return (0);
	else
		return (check_pldrm(a + 1, b - 1, s));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = slen(s) - 1;
	return (check_pldrm(0, i, s));
}
