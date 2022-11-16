#include "dog.h"

/**
 * init_dog - initialize the structure dog
 * @d: dog structure
 * @name: the string name
 * @age: the float
 * @owner: the string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
