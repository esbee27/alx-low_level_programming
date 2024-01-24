#include "function_pointers.h"
/**
 * int_index - main function
 * @array: array
 * @size: size of elements of array
 * @cmp: pointer to func of one 
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	retrurn (-1);
}
