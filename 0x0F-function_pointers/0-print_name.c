#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: a char
 * @f: a pointer to print_name
 * Return: returns name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
