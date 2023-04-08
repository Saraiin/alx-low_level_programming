#include "main.h"
/**
 * _islower - function to prints lower case
 * @c: parameter to be printed
 * Return: 0 for uppercase, 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
