#include "main.h"
/**
 * flip_bits -  returns nb of bits to flip to get from one
 * number ro another
 * @n: first number
 * @m: second number
 * Return: nb of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f = 0;
	unsigned long int p = n ^ m;

	while (p)
	{
		if (1 & p)
			f++;
		p = p >> 1;
	}
	return (f);
}
