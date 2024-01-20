#include "lists.h"

/**
 * print_dlistint - Function to print the elements of a doubly linked list
 * then return the number of nodes.
 *
 * @h: pointer points to the head node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t i;
	temp = h;

	while (temp != 0)
	{
		printf("%i\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
