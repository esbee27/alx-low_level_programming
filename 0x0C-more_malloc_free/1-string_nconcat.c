#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates
 * @s1: a value
 * @s2: a value
 * @n: a value
 * Return: returns a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int i;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	output = malloc(sizeof(char) * (s1len + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1len + i] = s2[i];
		output[s2len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1len + i] = s2[i];
		output[s2len + i] = '\0';
	}
	return (output);
}
