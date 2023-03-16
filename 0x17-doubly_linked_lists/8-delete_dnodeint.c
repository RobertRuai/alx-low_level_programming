#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes  node at gven position  of list_t list
 *
 *
 * @head: character to print
 * @index: character to print
 *
 * Return: 0 success
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = *head;
	if (!(*head))
		return (-1);

	while (temp && i != index)
	{
		i++;
		temp = temp->next;
	}

	if (!temp)
		return (-1);
	else if (temp == *head)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
	}
	else if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
	}
	return (1);
}
