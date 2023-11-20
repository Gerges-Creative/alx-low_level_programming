#include "lists.h"

/**
 * print_listint - prints the elements of a node of a linked list and then
 * returns the number of nodes
 * @h: pointer to the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}
