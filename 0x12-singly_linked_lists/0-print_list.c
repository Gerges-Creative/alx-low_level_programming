#include "lists.h"

/**
 * print_list - print the elements of a singly linked list then return the
 * number of nodes
 * @h: node of the list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;

		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nill)\n");

		h = h->next;
	}

	return (count);
}
