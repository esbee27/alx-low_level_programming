#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: a value
 * Return: returns o
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - ,ain function
 * @dest: a value
 * @src: a value
 * Return: returns d
 */

char *_strcpy(char *dest, char *src)

{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - main func..creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: returns dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog _t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
}
