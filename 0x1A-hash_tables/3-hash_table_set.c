#include "hash_tables.h"

/**
 * hash_table_set - entry point
 *
 * description - a function that adds an element to the hash table.
 *
 * @ht: The character to print
 * @key: The character to print
 * @value: The character to print
 *
 * Return: Always 0 (Success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *newnode = NULL;

	newnode = malloc(sizeof(hash_node_t));

	if (!newnode || !ht || !key || !value)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);

	i = key_index((const unsigned char *) key, ht->size);

	if (ht->array[i] == NULL)
	{
		ht->array[i] = newnode;
		newnode->next = NULL;
	}
	else if (strcmp(ht->array[i]->key, key) == 0)
		strcpy(ht->array[i]->value, value);
	else
	{
		newnode->next = ht->array[i];
		ht->array[i] = newnode;
	}

	return (1);
}
