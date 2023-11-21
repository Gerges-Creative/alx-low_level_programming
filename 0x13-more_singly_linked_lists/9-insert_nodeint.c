#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a certain index
 * @head: pointer points to the head node
 * @idx: refers to where the node will be inserted
 * @n: data of the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *idxnode, *newnode, *temp;
	unsigned int count = 0;

	if (!head || (idx > 0 && !*head))
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	idxnode = *head;
	while (count < idx - 1 && idxnode)
	{
		idxnode = idxnode->next;
		count++;
	}


	if (!idxnode)
	{
		free(newnode);
		return (NULL);
	}

	temp = idxnode->next;
	idxnode->next = newnode;
	newnode->next = temp;

	return (newnode);
}
