#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the doubly linked list
 * @head: the head node of the list
 * @n: the data to asgined to the node
 * Return: the address of the head node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->prev = 0;
	newnode->next = 0;
	newnode->n = n;

	while (temp != NULL)
		temp = temp->next;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp->next = newnode;
		newnode->prev = temp;
	}

	return (*head);
}
