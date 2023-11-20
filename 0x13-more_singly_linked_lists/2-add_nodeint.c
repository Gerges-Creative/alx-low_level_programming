#include "lists.h"

/**
 * add_nodeint - add a node at the begining of a linked list
 * @head: pointer that points to the head of the linked list
 * @n: is the variable add the new node
 * Return: the address of the new head or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newint;

	newint = malloc(sizeof(listint_t));
	if (newint == NULL)
		return (NULL);

	newint->n = n;
	newint->next = *head;
	*head = newint;

	return (*head);
}
