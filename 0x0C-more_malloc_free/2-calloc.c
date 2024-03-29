#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * _calloc - main function
 * @nmemb: a value
 * @size: a value
 * Return: returns 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = calloc(nmemb, size);
	if (j == NULL)
		return (NULL);
	else
		return (j);
}
