#include "main.h"
#include <stdio.h>

/**
 * _strchr - checks for a char
 * @s: an argument
 * @c: an argument
 * Return: returns a value
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
