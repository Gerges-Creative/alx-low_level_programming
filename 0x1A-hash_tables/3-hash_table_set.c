#include "hash_tables.h"

/**
 * create_node - a function to create a new node for the hash table
 * @key: the key
 * @value: the value
 * Return: pointer to the newly created node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	node = malloc(strlen(key) + 1);
	node = malloc(strlen(value) + 1);
	if (node == NULL || node->key == NULL || node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table the key/value is added to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it  succeeded or 0 if it failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current_node;

	if (*key == '\0')
		return (0);

	node = create_node(key, value);

	index = key_index((const unsigned char*) key, ht->size);

	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = current_node;
		ht->array[index] = node;
	}

	return (1);
}
