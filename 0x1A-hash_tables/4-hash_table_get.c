#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: is the hash table which will be looked into
 * @key: is the key to be matched for to get its value
 * Return: the value associated with the key element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	index = key_index((const unsigned char *) key, ht->size);

	node = ht->array[index];

	if (node == NULL || key == NULL || *key == '\0')
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (node->value != NULL)
				return (node->value);
		}
		node = node->next;
	}

	return ("(null)");
}
