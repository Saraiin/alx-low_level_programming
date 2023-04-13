#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: number of byte to be malloced
 * Return: return pointer, 98 if fails
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (!m)
		exit(98);
	return (m);
}
