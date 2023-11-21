#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer of head node
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *sum;
	int sumall = 0;

	if (head == NULL)
		return (0);

	sum = head;
	while (sum)
	{
		sumall += sum->n;
		sum = sum->next;
	}

	return (sumall);
}
