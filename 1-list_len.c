#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints number of elements
 * @h: pointer to structure
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
