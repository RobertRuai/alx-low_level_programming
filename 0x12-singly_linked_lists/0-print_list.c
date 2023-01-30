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
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count = count + 1;
		h = h->next;
	}
	return (count);
}
