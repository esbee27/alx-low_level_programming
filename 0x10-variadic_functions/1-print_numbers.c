#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers
 * @separator: a string that would be filled between numbers
 * @n: the maximum number of arguments
 * Return: returns 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
