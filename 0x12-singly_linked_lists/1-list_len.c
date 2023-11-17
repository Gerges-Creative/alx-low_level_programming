#include "lists.h"

/**
 * list_len - return the number of nodes of a singly linked
 * number of nodes
 * @h: node of the list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
