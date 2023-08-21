#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * Return: returns 0
 * @n: a value
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			if (i < n)
				_putchar('\n');
			else
				_putchar('\\');
	}
	_putchar('\n');
}

