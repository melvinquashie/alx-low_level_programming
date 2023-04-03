#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
