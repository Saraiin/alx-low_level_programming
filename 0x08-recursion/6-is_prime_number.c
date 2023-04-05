#include "main.h"
/**
 * check_prime - check if prime
 * @n: number to check
 * @d: divisor
 * Return: 1 if prime, 0 if not or recursive function call
 */
int check_prime(int n, int  d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_prime(n, d + 1));
}

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int d = 3;

	if (n == 0)
		return (1);

	else if (n % 2 == 0 || n < 2)
		return (0);
	else
		return (check_prime(n, d));
}
