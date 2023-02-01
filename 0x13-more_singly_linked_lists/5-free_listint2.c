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
	listint_t *crt, *tmp;

	if (head != NULL)
	{
		crt = *head;

		while ((tmp = crt) != NULL)
		{
			crt = crt->next;
			free(tmp);
		}

		*head = NULL;
	}
}
