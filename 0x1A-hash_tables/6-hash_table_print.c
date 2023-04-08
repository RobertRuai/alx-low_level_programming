#include "hash_tables.h"

/**
 * hash_table_delete - entr point
 * description - deletes a hash table.
 * @ht: pointer to the hash table.
 *
 * Return: 0 Success.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			node = tmp;
			tmp = tmp->next;
			free(node->key);
			free(node->value);
			free(node);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
