#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 *
 * @n: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);


	if (*head == NULL)
		node1->next = NULL;
	else
		node1->next = *head;

	node1->n = n;
	*head = node1;

	return (*head);
}
