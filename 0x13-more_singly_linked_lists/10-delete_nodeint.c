#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a specific index
 * @head: pointer to head node's pointer
 * @index: the index of the node to be deleted
 * Return: 1 upon success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delindex, *temp1, *temp2;
	unsigned int count = 0;

	if (!head || (index > 0 && !*head))
		return (-1);

	if (index == 0)
	{
		delindex = *head;
		*head = (*head)->next;
		free(delindex);
		return (1);
	}

	delindex = *head;
	while (count < index - 1 && delindex)
	{
		delindex = delindex->next;
		count++;
	}

	if (!delindex)
	{
		return (-1);
	}

	temp1 = delindex;
	delindex = delindex->next;
	temp2 = delindex->next;
	free(delindex);
	temp1->next = temp2;

	return (1);
}
