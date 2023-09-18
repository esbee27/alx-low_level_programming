#include <stdio.h>
#include "dog.h"

/**
 * struct dog - prints struct dog
 * @d: initializer
 * Return: returns dog char
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("(nil)");
	}
}