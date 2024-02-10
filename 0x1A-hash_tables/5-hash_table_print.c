#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 * Return: no return needed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index = 0, count;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		if (node)
			printf("'%s': '%s'", node->key, node->value);
		temp = node;
		count = index;
		while (count < ht->size)
		{
			if (temp != NULL)
				temp = temp->next;

			if (temp != NULL)
				printf(", '%s': '%s'", temp->key, temp->value);
			else if (ht->array[count + 1] != NULL && node != NULL)
			{
				printf(", ");
				break;
			}
			else
				count++;
		}
		index++;
	}
	printf("}\n");
}
