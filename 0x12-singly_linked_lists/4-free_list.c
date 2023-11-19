#include "lists.h"

/**
 * free_list - traverse on a linked list and free its members
 * @head: pointer to node
 * Return: No return
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp->next != NULL)
	{
		free(temp);

		temp = temp->next;
	}
}
