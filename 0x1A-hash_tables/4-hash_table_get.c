#include "hash_tables.h"

/**
 * hash_table_get - entry point
 *
 * description -function that retrieves a value associated with  key.
 *
 * @ht: The character to print
 * @key: The character to print
 *
 * Return: Always 0 (Success)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
 
	hash_node_t *head;
	i = key_index((const unsigned char *) key, ht->size);

	head =ht->array[i];

	while (head)
	{
		if(!head->key)
			return (NULL);
		if (strcmp(head->key, key) == 0)
			return head->value;
		head = head->next;
	}
	return (NULL);
}
