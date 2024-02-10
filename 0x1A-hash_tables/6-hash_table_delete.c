#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: no return needed
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp, *temp2;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		free (ht);
		return;
	}


	while (index < ht->size)
	{
		node = ht->array[index];

		temp = node;

		while (temp != NULL)
		{
			temp2 = temp;
			free(temp2->key);
			free(temp2->value);
			free(temp2);

			temp = temp->next;
		}

		index++;
	}

	free(ht->array);
	free(ht);
}
