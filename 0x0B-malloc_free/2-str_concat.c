#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (l = 0; l < j; k++, l++)
		str[k] = s2[l];

	return (str);
}
