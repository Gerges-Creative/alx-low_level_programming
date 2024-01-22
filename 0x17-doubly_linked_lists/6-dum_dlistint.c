#include "lists.h"

/**
 * sum_dlistint - sum the data of all the linked list node
 * @head: pointer to the head node
 * Return: the summed number of the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
