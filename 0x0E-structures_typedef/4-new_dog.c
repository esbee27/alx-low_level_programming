#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns the length of string
 * @str: a value
 * Return: returns o
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
		len++;

	return (len);
}

/**
 * _strcopy - ,ain function
 * @dest: a value
 * @src: a value
 * Return: returns d
 */

char *_strcopy(char *dest, char *src)

{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

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
	dog_t *dog;

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
