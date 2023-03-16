#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of  list_t list
 *
 * @n: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	last = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
