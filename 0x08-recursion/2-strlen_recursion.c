#include "main.h"

/**
 * _strlen_recursion - string length
 * Return: returns length
 * @s: an input
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
