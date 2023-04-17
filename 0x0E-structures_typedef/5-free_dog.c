#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dos
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
