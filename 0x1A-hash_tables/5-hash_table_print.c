#include "hash_tables.h"

/**
 * hash_table_print - entry point
 *
 * description -a function that prints a hash table.
 *
 * @ht: The character to print
 *
 * Return: Always 0 (Success)
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			i++;
			break;
		}
	}

        while (i < ht->size)
        {
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		i++;
	}
	printf("}\n");
}
