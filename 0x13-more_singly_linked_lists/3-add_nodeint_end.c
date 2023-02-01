#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of  listint_t list
 *
 * @n: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node1;
	listint_t *last;

	node1 = malloc(sizeof(listint_t));

	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	last = *head;
	if (last == NULL)
		*head = node1;
	else
	{
		while (last->next != NULL)
			last = last->next;
	last->next = node1;
	}
	return (*head);
}
