#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies numbers
 * @argv: an input
 * @argc: a value
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", j * i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
