#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: paramater to be printed
 * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
