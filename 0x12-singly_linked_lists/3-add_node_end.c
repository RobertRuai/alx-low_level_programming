#include "lists.h"

/**
 * add_node_end - adds a new node at the end of  list_t list
 *
 * @str: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1;
	size_t len2 = 0;
	list_t *last;

	if (str == NULL)
		len2 = 0;

	while (str[len2] != '\0')
		len2++;

	node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
		return (NULL);


	node1->str = strdup(str);
	node1->len = len2;
	node1->next = NULL;

	last = *head;
	if (last == NULL)
		*head = node1;
	else
	{
		while (last->next != NULL)
			last = last->next;
	last->next = node1;
	}
	return (*head);
}
