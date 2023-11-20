#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head: pointer that points to the current node
 * @n: the variable to be added in the node
 * Return: address of the new element aka the tail of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newint, *temp;

	newint = malloc(sizeof(listint_t));
	if (newint == NULL)
		return (NULL);

	newint->n = n;
	newint->next = NULL;

	if (*head == NULL)
	{
		*head = newint;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}


	temp->next = newint;

	return (newint);
}
