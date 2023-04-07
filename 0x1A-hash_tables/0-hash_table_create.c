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
	unsigned long int i;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));

	if (table)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}

		for (i = 0; i < size; i++)
			table->array[i] = NULL;
	}
	return (table);
}
