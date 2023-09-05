#include <stdio.h>

/**
 * main - prints all arguments
 * @argv: a value
 * @argc: a value
 * Return: returns o
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argc;
	for (i = 0; i >= 0 ; i++)
	printf("%s\n", argv[i]);
		return (0);
}
