#include "lists.h"

/**
 * delete_dnodeint_at_index - delet a node at indext nth
 * @head: pointer to the head node
 * @index: the index nth node to be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *prev, *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0 && *head != NULL)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = 0;
		free(temp);
	}
	else
	{
		while (i < index && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (-1);
		else if (temp->next == NULL)
		{
			prev = temp->prev;
			prev->next = 0;
			free(temp);
			return (1);
		}

		prev = temp->prev;
		next = temp->next;
		prev->next = next;
		next->prev = prev;
		free(temp);
	}
	return (1);
}
