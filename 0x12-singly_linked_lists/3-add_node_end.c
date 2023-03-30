#include "lists.h"

/**
 * add_node_end - adds a new node at the end of  list_t list
 *
 * @head: head of linked list
 * @str: string to be used as data for node
 *
 * Return: the address of the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *string;
	list_t *lastnode = *head;

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->str = string;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = new;

	return (new);
}

