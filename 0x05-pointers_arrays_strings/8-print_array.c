#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays
 * Return: returns 0
 * @a: returns 0
 * @n: returns a value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < 1; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
