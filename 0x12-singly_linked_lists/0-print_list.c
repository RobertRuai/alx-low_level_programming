#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 *
 * @h: character to print
 *
 * Return: 0 success
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}
