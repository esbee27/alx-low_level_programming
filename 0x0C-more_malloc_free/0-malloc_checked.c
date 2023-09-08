#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - checks malloc
 * @b: a arg
 * Return: returns 98
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (0);
}
