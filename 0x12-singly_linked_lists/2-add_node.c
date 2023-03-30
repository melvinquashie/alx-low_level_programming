#include "lists.h"

/**
 * add_node - adds a new node at the beginning of  list_t list
 *
 * @head: head of linked list
 * @str: string to be used as data for node
 *
 * Return: the address of the new node, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	char *string;
	int length;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}
