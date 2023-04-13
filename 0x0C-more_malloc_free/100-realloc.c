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
	char *newp;
	unsigned int i;
	char  *oldp;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
		return (newp);
	}
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (!newp)
		return (NULL);
	oldp = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		newp[i] = oldp[i];
	free(ptr);
	return (newp);
}
