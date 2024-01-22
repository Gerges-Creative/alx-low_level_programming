#include "lists.h"
77;30604;0c
/**
 * get_dnodeint_at_index - get a node at nth index
 * @head: the head node
 * @index: at which the nth node is
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
