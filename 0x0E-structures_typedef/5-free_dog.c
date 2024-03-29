#include "dog.h"

/**
 * free_dog - frees dog
 * @d: the dog
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
