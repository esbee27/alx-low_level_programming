#include "main.h"

/**
 * _islower - main function
 *@c: parameter to r checked
 * Return: return o
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
