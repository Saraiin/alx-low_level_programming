#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum2 = 0;
	int  i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}
