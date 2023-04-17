#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new struct dog
 * @name: name of the dog
 * @age: its age
 * @owner: name of its owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *nwdog;

	if (name == NULL || owner == NULL)
		return (NULL);
	nwdog = malloc(sizeof(dog_t));
	if (nwdog == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	nwdog->name = malloc(i * sizeof(char));
	if (nwdog->name == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		nwdog->name[j] = name[j];

	nwdog->age = age;
	for (k = 0; owner[k]; k++)
		k++;
	k++;
	nwdog->owner = malloc(k * sizeof(char));
	if (nwdog->owner == NULL)
	{
		free(nwdog->name);
		free(nwdog);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		nwdog->owner[j] = owner[j];
	return (nwdog);
}
