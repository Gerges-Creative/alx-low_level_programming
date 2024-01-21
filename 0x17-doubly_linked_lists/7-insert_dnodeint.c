#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at a certian index
 * @h: the head node
 * @idx: the index at which the node will be added
 * @n: the data the of n for the new node
 * Return: the address of the head node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	int i = 0;

	temp = *h;

	if (idx < 0)
		return (NULL);
	else if (idx == 0)
		*add_dnodeint(*h, n);
	else
	{
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}

		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->prev = temp;
		temp->next = newnode;
		temp = temp->next;
		temp->prev = newnode;
		newnode->next = temp;
	}

	return (*h);
}
