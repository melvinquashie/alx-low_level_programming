#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth ptr of a linked list
 *
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: node of linked list (ptr)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);

		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
