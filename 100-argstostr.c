#include <stdlib.h>

/**
 * *char argstostr - main function
 * @ac: a value
 * @av: a value
 * Return: returns a value
 */

char *argstostr(int ac, char **av)
{
	int i, j k length;
	*char str;

	if (ac == 0 || av == NULL)
		return (NULL);
	lenngth = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0\; j++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j - 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
