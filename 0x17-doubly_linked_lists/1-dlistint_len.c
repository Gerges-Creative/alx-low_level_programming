#include "lists.h"

/**
 * dlistint_len - return the number of nodes i.e. measure the linked list's
 * length
 *
 * @h: pointer points to the head node.
 * Return: the number of nodes in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int i = 0;

	temp = h;

	while (temp != 0)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
