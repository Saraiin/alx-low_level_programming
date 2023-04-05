#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
