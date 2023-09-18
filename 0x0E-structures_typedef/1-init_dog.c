#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a var
 * @name: dog name
 * @d: initaial
 * @age: dog age
 * @owner: dog owner
 * Return: returns 0
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
