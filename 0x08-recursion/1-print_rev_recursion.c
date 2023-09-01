#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: an input
 * REturn: returns 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
