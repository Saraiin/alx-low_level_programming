#include "main.h"
/**
 * numberbit - return number of bit
 * @s: string to check
 * Return: nb
 */
int numberbit(const char *s)
{
	int nb = 0;

	while (s != NULL)
	{
		nb++;
		s++;
	}
	return (nb);
}
/**
 * poww - return a raised to the power of b
 * @a: base
 * @b: exponent
 * Return: result of a power b
 */
int poww(int a, int b)
{
	unsigned int p = 1;

	while (b)
	{
		p *= a;
		b--;
	}
	return (p);
}
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pow = 0, nbb = 0;
	int i;

	if (b == NULL)
		return (0);
	nbb = numberbit(b);
	for (i = nbb - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * poww(2, pow);
		pow++;
	}
	return (result);
}
