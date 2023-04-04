#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 *
 * @head: pointer to the 1st node of the linked list
 *
 * Return: new_node
 */

/*
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head, *tmp = head;
	size_t counter = 0, new_n = 0;


	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		counter++;
		ptr = ptr->next;


		while (new_n < counter)
		{
			if (ptr == tmp)
			{
				printf("-> [%p] %d\n", (void *)ptr, ptr->n);
				return (counter);
			}
			tmp = tmp->next;
			new_n++;
		}

		if (!head)
			exit(98);
	}
	return (counter);
}
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *previous = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current < previous)
			break;

		previous = current;
		current = current->next;
	}

	if (current != NULL)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		count++;
	}

	return (count);
}
