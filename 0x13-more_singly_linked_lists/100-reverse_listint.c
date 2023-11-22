#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer points to the head node
 * Return: pointer to the frist node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode, *prev;

	prev = 0;
	nextnode = *head;

	while (next != NULL)
	{
		nextnode = nextnode->next;
		*head->next = prev;
		prev = *head;
		*head = nextnode;
	}

	*head = prev
}
