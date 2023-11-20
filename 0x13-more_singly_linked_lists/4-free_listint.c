#include "lists.h"

/**
 * free_listint - frees the nodes of the linked list
 * @head: pointer to the head of the linked list
 * Return: No return
 */
void free_listint(listint_t *head)
{
	while (head!= NULL)
	{
		free(head);

		head = head->next;
	}
}
