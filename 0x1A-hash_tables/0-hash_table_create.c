#include "hash_tables.h"

/**
 * hash_table_create- Function creates a new hashtable
 * @size: size of new hashtable
 *
 * Return: Pointer to a newly created hashtable on success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));

	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
        	table->array[i] = NULL;

	return (table);
}
