#include "dog.h"

/**
 * init_dog - A struct function
 * @d: the string
 * @name: name of the dog
 * @age: argument age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
