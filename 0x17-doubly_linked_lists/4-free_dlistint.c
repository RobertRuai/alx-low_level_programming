#include "lists.h"

/**
 * free_dlistint - entry point
 *
 * description -  frees a list_t list.
 *
 * @head: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
