#include "lists.h"

/**
 * free_listint2 - frees the nodes of the linked list and then sets the
 * head to NULL
 * @head: pointer to the head of the linked list
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
