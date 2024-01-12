#include "main.h"
#include "stdio.h"

/**
 * main - main function
 * @argv: a string
 * @argc: a value
 * Return: returns o
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
