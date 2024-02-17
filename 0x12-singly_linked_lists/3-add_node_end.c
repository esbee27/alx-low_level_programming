#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a node to the end
 * @head: the start of the list
 * @str: pointer to the list
 * Return: returns address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
