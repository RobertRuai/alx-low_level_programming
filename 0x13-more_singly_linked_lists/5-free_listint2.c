#include "lists.h"

/**
 * free_listint2 - entry point
 *
 * description -  frees a listint_t list.
 *
 * @head: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
