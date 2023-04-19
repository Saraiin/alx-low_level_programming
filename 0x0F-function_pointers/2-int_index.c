#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: comparison function
 * Return: index of integer in the array, -1 if fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
					return (i);
		}
	return (-1);
}
