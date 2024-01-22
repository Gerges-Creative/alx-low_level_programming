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
	dlistint_t *newnode, *temp, *temp2;
	unsigned int i = 0;

	temp = *h;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}

		if (temp == NULL)
			return (NULL);
		else if (temp->next == NULL)
		{
		       newnode = add_dnodeint_end(h, n);
			return (newnode);
		}

		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
			return (NULL);

		temp2 = temp->next;

		newnode->prev = temp;
		temp->next = newnode;
		newnode->next = temp2;
		newnode->n = n;

		if (temp2 != NULL)
			temp2->prev = newnode;
	}

	return (newnode);
}
