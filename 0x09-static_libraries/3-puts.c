#include "main.h"
#include <stdio.h>

/**
 * _puts - creates a string
 * Return: returns 0
 * @str: a string pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
