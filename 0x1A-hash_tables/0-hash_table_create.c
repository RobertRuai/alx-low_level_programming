#include "hash_tables.h"

/**
 * hash_table_create - entry point
 *
 * description - a function that creates a hash table.
 *
 * @size: The character to print
 *
 * Return: Always 0 (Success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	table = malloc(sizeof(hash_table_t));

	if (!table || !size)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);

	return (table);
}
