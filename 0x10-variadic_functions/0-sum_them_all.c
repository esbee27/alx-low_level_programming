#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - main function
 * @n: a value
 * Return: returns a value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
