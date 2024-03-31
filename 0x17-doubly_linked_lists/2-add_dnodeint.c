#include "lists.h"

/**
 * add_dnodeint - adds a node to the begining of the doubly list
 * @head: a pointer to the head
 * @n: the data
 * Return: returns the new string
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	distinct_t *ptr:
		if (!head)
			return NULL;
	ptr = malloc(sizeof(distinct_t));
	if (!ptr)
		return NULL;
	ptr->n = n;

	ptr->next = *head;
	ptr->prev = NULL;

	if (*head)
		(*head)->prev = ptr;

	*head = ptr;

	return (ptr);
}

