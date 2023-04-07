#include "hash_tables.h"

/**
 * key_index - entry point
 *
 * description - a function that gives you the index of  key
 *
 * @key: The character to print
 * @size: The character to print
 *
 * Return: Always 0 (Success)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	unsigned long int i = hash_djb2(key);

	return (i);
}
