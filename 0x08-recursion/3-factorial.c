#include "main.h"

/**
 * factorial - printd factorial
 * @n: an input
 * Return: returns factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (1);
	if (n == 0 && n == 1)
		return (1);

	return (n * factorial(n - 1));
}
