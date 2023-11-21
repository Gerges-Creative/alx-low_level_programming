#include "lists.h"

/**
 * pop_listint - the function deletes the head node of linked list
 * and returns the head node's data
 * @head: pointer that points to the head node
 * Return: the data of the deleted node or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if ((*head)->n == NULL)
		return (0);
	else
		n = (*head)->n;

	*head = (*head)->next;

	return (n);
}
