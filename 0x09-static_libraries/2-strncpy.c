#include "main.h"

/**
 * _strncpy - copies characters
 * Return: returns o
 * @dest: a value
 * @src: a value
 * @n: a value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
