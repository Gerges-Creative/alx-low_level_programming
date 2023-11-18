#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 * @head: pointer to the current node which is the tail of the linked list
 * @str: pointer to string
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t count = 0;
	list_t *tail, *temp;



	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);

	while (str[count] != '\0')
	{
		count++;
	}

	tail->len = count;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = tail;


	return (*head);
}
