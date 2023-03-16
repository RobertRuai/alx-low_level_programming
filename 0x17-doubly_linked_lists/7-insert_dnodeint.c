#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at gven position  of list_t list
 *
 * @n: character to print
 * @h: character to print
 * @idx: character to print
 *
 * Return: 0 success
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *prev;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	prev = *h;
	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (prev == NULL)
		return (add_dnodeint_end(h, n));
	for (; i < (idx - 1); i++)
	{
		if (prev == NULL || prev->next == NULL)
			return (NULL);
		prev = prev->next;
	}
	new_node->next = prev->next;
	prev->next = new_node;
	return (new_node);
}
