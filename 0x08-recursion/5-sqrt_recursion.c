#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqroot(n, 0));
}

/**
 * find_sqroot - find square root of n
 * @n: number
 * @sqroot: root
 * Return: natural square root
 */
int find_sqroot(int n, int sqroot)
{
	if (sqroot * sqroot > n)
		return (-1);
	if (sqroot * sqroot == n)
		return (sqroot);
	return (find_sqroot(n, sqroot + 1));
}
