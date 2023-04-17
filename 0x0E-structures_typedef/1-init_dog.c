#include "dog.h"

/**
 * init_dog - intialize a variable of type struct dog
 *@d: new variable struct dog
 *@name: name
 *@age: age of dog
 *@owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
