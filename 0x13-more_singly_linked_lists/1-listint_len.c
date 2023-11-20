#include "lists.h"

/**
 * listint_len - returns the number of nodes
 * @h: pointer to the node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
