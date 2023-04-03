#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (sum);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
