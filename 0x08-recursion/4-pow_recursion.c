#include "main.h"

/**
 * _pow_recursion - power
 * @y: input
 * @x: input
 * Return: returns a value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-10);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
