#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap numers
 * Return: returns o
 * @a: a value
 * @b: a value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
