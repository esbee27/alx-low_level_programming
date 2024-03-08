#include "dog.h"

/**
 * print_dog - Prints a dog
 * @d: the argument
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil");
	else
	{
		if (d->name == NULL)
			printf("Name: (nill");
		else
			printf("Name: %s\n", d->name);

		if (d->age)
			printf("Age: %f\n", d->age);

		if (d->name == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
