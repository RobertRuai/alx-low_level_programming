#include "lists.h"

/**
 * free_listint - entry point
 *
 * description -  frees a listint_t list.
 *
 * @head: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
