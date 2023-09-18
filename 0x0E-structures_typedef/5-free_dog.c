#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees space
 * @d: a value
 * Return: returns space
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
