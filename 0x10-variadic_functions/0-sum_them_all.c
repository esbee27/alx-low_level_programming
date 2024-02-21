#include "variadic_functions.h"

<<<<<<< HEAD
/**
 * sum_them_all - sums the elements
 * @n: a value
 * Return: returns a pointer
=======

/**
 * sum_them_all - sums all values
 * @n: number of arguents
 * Return: returns the sum of all values
>>>>>>> 728baa4b5d1afd0dadae60e6279ad26c844d59df
 */

int sum_them_all(const unsigned int n, ...)
{
<<<<<<< HEAD
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start (valist, n);

	for (i = 0; i < n; i++)
		sum += var_arg(valist, int);

	va_end(valist);

=======
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
>>>>>>> 728baa4b5d1afd0dadae60e6279ad26c844d59df
	return (sum);
}
