#include "main.h"

/**
 * alloc_grid - Returns a pointer to a two dimensional array of integers
 * @width: Width of array
 * @height: height of array
 * @Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **str;


	if (width < 1 || height < 1)
		return (NULL);

	str = malloc(height * sizeof(int *));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * sizeof(int));
		if (str[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(str[i]);
			free(str);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			str[i][j] = 0;

	return (str);
}
