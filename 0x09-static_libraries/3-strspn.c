#include "main.h"

/**
 * _strspn - main function
 * @s: an arguement
 * @accept: an argument
 * Return: returns a value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, check, value;

		for (i = 0; s[i] != '\0'; i++)
		{
			check = 0;

			for (n = 0; accept[n] != '\0'; n++)
			{
				if (accept[n] == s[i])
				{
					value++;
					check = 1;
				}
			}
		}
		if (check == 0)
}
