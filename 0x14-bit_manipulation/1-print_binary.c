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
 * print_binary - prints binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int pow = 0, n1 = n;
	int b = 0;

	if (n == 0)
		_putchar('0');

	while (pow < n)
	{
		pow = poww(2, b);
		b++;
	}
	b--;
	while (b >= 0)
	{
		pow = poww(2, b);
		if (pow > n && n1 == n)
		{
			b--;
			pow = poww(2, b);
		}
		if (pow > n1)
			_putchar('0');
		else
		{
			_putchar('1');
			n1 -= poww(2, b);
		}
		b--;
	}
}
