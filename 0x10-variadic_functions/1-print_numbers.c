#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @n: a value
 * @separator: a string
 * Return: returns print numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
