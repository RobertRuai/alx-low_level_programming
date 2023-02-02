#include "lists.h"

/**
 * delete_nodeint_at_index - adds a new node at gven position  of list_t list
 *
 *
 * @head: character to print
 * @index: character to print
 *
 * Return: 0 success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *prev;

	temp = *head;
	prev = *head;

	if (prev == NULL || (prev->next == NULL && index != 0))
		return (-1);

	for (; i < index; i++)
	{
		if (i == 0 && index == i)
		{
			*head = (*head)->next;
			free(temp);
		}
		else
		{
			if (i == (index - 1) && temp)
			{
				prev->next = temp->next;
				free(temp);
			}
			else
			{
				prev = temp;
				if (prev == NULL)
					break;
				temp = temp->next;
			}
		}
	}
	return (1);
}
