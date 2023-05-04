#include "main.h"
/**
 * set-bit sets value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof((unsigned long int) * 8 - 1)))
			return (-1);
	value = 1 << index;
	*n = *n | value;
	return (1);
}

