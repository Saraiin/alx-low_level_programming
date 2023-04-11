#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int *) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < i; j++)
			a[i][j] = 0;
	}
	return (a);
}
