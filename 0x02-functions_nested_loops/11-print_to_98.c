#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print times table
 * @n: n table
 * Return: returns o
 */

void print_to_98(int n)
{
	int i;

	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i >= 0 && i < 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
		printf("\n");
	}
	for (i = n ; i >= 98 ; i--)
	{
		if (i > 98)
			printf("%d, ", i);
		else if (i == 98)
			printf("%d", i);
		printf("\n");
	}
	for (i = n ; i <= 98 ; i++)
	{
		if (i < 98)
			printf("%d, ", i);
		else if (i == 98)
			printf("%d", i);
		printf("\n");
	}
	for (i = n ; i <= 98 ; i++)
	{
		if (i < 0)
			printf("%d, ", i);
		else if (i == 98)
			printf("%d", i);
	}
	printf("\n");
}
