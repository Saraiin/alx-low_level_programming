#include "main.h"
/**
 * poww - return a power b
 * @a: base
 * @b: exponent
 * Return: result
 */
int poww(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * poww(a, b - 1));
}
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: number
 * @index: index
 * Return: 1 for success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
		return (-1);
	value = poww(2, index);
	*n = (*n & value) ? *n ^ value : *n;
	return (1);
}
