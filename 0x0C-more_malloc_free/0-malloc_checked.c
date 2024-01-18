#include "stdlib.h"
#include "main.h"
#include "stdio.h"

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
		return (output);
}
