#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: parameter of the function
 * @b: parameter of the function
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
