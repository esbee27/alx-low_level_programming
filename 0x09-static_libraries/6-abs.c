#include "main.h"

/**
 * _abs - main function
 * @a: returns 0
 * Return: returns 0 and 1
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a == 0)
		return (0);
	else
		return (a);
}
