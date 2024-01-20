#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer that points to the head pointer
 * @n: is the value of the int node
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode != NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;

	if(*head != NULL)
	{
		*head = newnode;
	}
	else
	{
		*temp->prev = newnode;
		newnode->next = *head;
		*head = newnode;
	}

	return (*head);
}
