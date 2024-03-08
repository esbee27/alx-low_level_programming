#include "dog.h"

/**
 * void init_dog(struct dog *d, char *name, float age, char *owner)
 * @d: the string
 * @name: name of the dog
 * @age: argument age
 * @owner: owner
 * @Return: returns 0
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
