#include "lists.h"

/**
 * pop_listint - entry point
 *
 * description -  deletes head node of a listint_t list
 *
 * @head: The character to print
 *
 * Return: Always 0 (Success)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp, *nxt;

	if (head == NULL)
		return (0);
	tmp = *head;
	nxt = tmp->next;
	i = tmp->n;
	free(tmp);
	*head = nxt;

	return (i);
}
