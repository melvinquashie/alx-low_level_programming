#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 *
 * @head: head of linked list
 * @index: index to delete
 *
 * Return: 1 (success), -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = *head, *prev = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr->next != NULL)
	{
		if (i == index)
		{
			prev->next = ptr->next;
			free(ptr);
			return (1);
		}
		prev = ptr;
		ptr = ptr->next;
		i++;
	}

	if (i == index)
	{
		prev->next = NULL;
		free(ptr);
		return (1);
	}
	return (-1);
}