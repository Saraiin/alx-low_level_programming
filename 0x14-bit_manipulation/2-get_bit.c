#include "main.h"
/**
 * get_bit - return value of a bit a given index
 * @n: number to check
 * @index: index to check
 * Return: value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, c;

	if (index > (sizeof(unsigned long int) * 8 - 1 ))
		return (-1);
	a = 1 << index;
	c = n & a;
	if (c == a)
		return (1);
	return (0);
}
