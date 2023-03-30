#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	n = n - 1;
	counter = 0;
	while (i <= n)
	{
		temp = a[counter];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}

