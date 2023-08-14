#include <stdio.h>

/**
 * main - main header
 *
 * Return: return o
 */

int main(void)
{
	int i;

	for (i = 0; 1 < 10; i++)
	{
		putchar(i + '0');
			if (i != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	return (0);
}
