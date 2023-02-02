#include "lists.h"

/**
 * sum_listint - entry point
 *
 * Description: get sum of all the data (n) of a listint_t linked list.
 *
 * @head: character to print
 *
 * Return: 0 success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
