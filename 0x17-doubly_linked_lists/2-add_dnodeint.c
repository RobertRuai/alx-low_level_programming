#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 *
 * @n: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;
	return (*head);
}
