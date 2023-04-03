#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 *
 * @head: head of linked list
 *
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n = 0;

	if (*head == NULL)
		return (n);

	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
