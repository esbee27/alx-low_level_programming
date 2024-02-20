#include "variadic_functions.h"


/**
 * sum_them_all - sums all values
 * @n: number of arguents
 * Return: returns the sum of all values
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;
	int sum = 0;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		 va_end(ptr);
	}
	return (sum);
}
