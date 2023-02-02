#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at gven position  of list_t list
 *
 * @n: character to print
 * @head: character to print
 * @idx: character to print
 *
 * Return: 0 success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node1, *prev;

	if (*head == NULL)
		return (NULL);

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);

	prev = *head;
	node1->n = n;

	if (idx == 0)
	{
		node1->next = prev;
		*head = node1;
		return (node1);
	}
	for (; i < (idx - 1); i++)
	{
		if (prev == NULL || prev->next == NULL)
			return (NULL);
		prev = prev->next;
	}
	node1->next = prev->next;
	prev->next = node1;
	return (node1);
}
