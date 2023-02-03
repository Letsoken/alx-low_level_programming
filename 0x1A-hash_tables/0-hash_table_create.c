#include "hash_tables.h"
/**
 * hash_table_create- Function creates a new hashtable
 * @size: size or capacity of new hashtable
 * Return: Pointer to a newly created hashtable on success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (*table == NULL)
		return (NULL);

	table->array = (hash_node_t**)calloc(table->size, sizeof(hash_node_t*));
	if (table->array == NULL)
		free(table);
		return (NULL);

	for (i = 0; i < table->size; i++)
        table->array[i] = NULL;

	return table;
}
