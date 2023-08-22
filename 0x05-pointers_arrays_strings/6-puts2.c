#include "main.h"

/**
 * puts2 - main function
 * Return: returns 0
 * @str: prints even numers
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
