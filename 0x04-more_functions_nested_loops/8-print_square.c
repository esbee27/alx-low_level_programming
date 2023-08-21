#include "main.h"

/**
 * print_square - prints square
 * Return: returns o
 * @size: a value
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int j, i;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
