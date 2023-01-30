#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @str: character to print
 * @head: character to print
 *
 * Return: 0 success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;
	size_t len2 = 0;

	if (str == NULL)
		len2 = 0;

	while (str[len2] != '\0')
		len2++;

	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (NULL);


	if (*head == NULL)
		node1->next = NULL;
	else
		node1->next = *head;

	node1->str = strdup(str);
	node1->len = len2;
	*head = node1;

	return (*head);
}
