#include "main.h"
#include <stdio.h>

/**
 * _strlen - string length
 * Return: returns string length
 * @s: a value
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
