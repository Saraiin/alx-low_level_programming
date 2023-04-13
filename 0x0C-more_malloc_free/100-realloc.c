#include "main.h"
#include <stdlib.h>
/**
 * _realloc - realloctes memory using malloc and free
 * @ptr: ptr to previouse allocated memory
 * @old_size: old size for ptr
 * @new_size: new size
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	unsigned int i, max = new_size;
	void  *olda = ptr;

	if (a == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = olda[i];
	free(ptr);
	return (a);
}
