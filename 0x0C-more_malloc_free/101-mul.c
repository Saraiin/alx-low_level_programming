#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * digit - checks if string contains a non digit
 * @s: string
 * Return: 0 if non digit fount, 1 otherwise
 */
int digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * strlen - length of string
 * @s: string
 * Return: length of string
 */
int strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - error for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arg
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int ln1, ln2, ln, i, carry;
	int d1, d2, *mul, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !digit(s1) || !digit(s2))
		errors();
	ln1 = strlen(s1);
	ln2 = strlen(s2);
	ln = ln1 + ln2 + 1;
	mul = malloc(sizeof(int) * len);
	if (!mul)
		return (1);
	for (i = 0; i <= ln1 + ln2; i++)
		mul[i] = 0;
	for (ln1 = ln1 - 1; ln1 >= 0; ln1--)
	{
		d1 = s1[ln1] - '0';
		carry = 0;
		for (ln2 =strlen(s2) - 1; ln2 >= 0; ln2--)
		{
			d2 = s2[ln2] - '0';
			carry += mul[ln1 + ln2 + 1] + (d1 * d2);
			mul[ln1 + ln2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[ln1 + ln2 +1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (mul[i])
			a = 1;
		if (a)
			_putchar(mul[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return(0);
}
