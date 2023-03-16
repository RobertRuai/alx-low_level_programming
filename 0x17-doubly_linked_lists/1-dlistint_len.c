#include "lists.h"

/**
 * dlistint_len - prints all the no: of elements of list_t list
 *
 * @h: character to print
 *
 * Return: 0 success
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
