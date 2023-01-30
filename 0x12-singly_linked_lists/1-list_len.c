#include "lists.h"

/**
 * list_len - prints all the no: of elements of list_t list
 *
 * @h: character to print
 *
 * Return: 0 success
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
