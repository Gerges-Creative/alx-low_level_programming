#inlcude "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a certain index
 * @head: pointer points to the head node
 * @idx: refers to where the node will be inserted
 * @n: data of the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *idxnode, *newnode;
	unsigned int count = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	idxnode = *head;
	while (count < idx - 1)
	{
		idxnode = idxnode->next;
		count++;
	}

	newnode->n = n;
	if (idxnode)
		idxnode->next = newnode;
	else
		return (NULL);

	return (newnode);
}
