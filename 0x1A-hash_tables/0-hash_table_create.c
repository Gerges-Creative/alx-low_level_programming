#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 * @size: the size of the array of the hashtable
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = calloc(size, sizeof(hash_node_t));
	if (array == NULL)
		return (NULL);

	table->array = array;
	table->size = size;

	return (table);
}
