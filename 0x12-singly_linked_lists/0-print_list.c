#include "lists.h"
#include <stdio.h>

/**
 * struct list_s - singly list
 * print_list - prints a singly linked list
 * @h: a pointer to str
 * @str: pointer to singly list
 * @len: length of string
 * @next: points to the next node
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s/n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
