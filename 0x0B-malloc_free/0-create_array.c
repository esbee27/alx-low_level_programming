#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: sizeof array
 * @c: stored char
 * Return: returns pointer of array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; 1++)
		str[i] = c;

	return (c);
}
