#include "lists.h"

/**
 * print_listint - prints all the elements of list_t list
 *
 * @h: character to print
 *
 * Return: 0 success
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
