#include "lists.h"

/**
 * free_list - entry point
 *
 * description -  frees a list_t list.
 *
 * @head: The character to print
 *
 * Return: Always 0 (Success)
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head->str);
		head = head->next;
		free(tmp);
	}
}
