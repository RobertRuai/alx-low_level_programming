#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 *
 * description -  returns the nth node of a listint_t linked list
 *
 * @head: The character to print
 * @index: The character to print
 *
 * Return: Always 0 (Success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
