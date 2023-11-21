#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;
	unsigned int count = 0;

	nthNode = head;

	while (count < index)
	{
		nthNode = nthNode->next;
		count++;
	}

	if (nthNode)
		return (nthNode);
	else
		return (NULL);
}
