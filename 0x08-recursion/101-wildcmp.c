#include "main.h"
/**
 * match - check if matched after wildcard
 * @s1: first string
 * @s2: second string
 * @wd: right position after wildcard
 * Return: 1 if matched, 0 if not
 */
int match(char *s1, char *s2, char *wd)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (match(s1, s2 + 1));
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1, wd));
	else
		return (match(s1 + 1, wd, wd));
}


/**
 * wildcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
