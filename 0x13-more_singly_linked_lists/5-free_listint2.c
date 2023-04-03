#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: head of linked list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
		return;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
