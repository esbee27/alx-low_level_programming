#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: initializer
 * Return: returns dog char
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("(nil)");
	}
}
