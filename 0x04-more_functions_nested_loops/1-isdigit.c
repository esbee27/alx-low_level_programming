#include "main.h"

/**
 * _isdigit - main function
 * Return: returns 1 or 0
 * @c: figures
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
