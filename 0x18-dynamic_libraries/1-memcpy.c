#include "main.h"

/**
 * _memcpy - entry point
 * @dest: a value
 * @src: a value
 * @n: a value
 * Return: returns 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
