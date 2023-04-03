#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 *
 * @h: head of linked list
 *
 * Return:  the number of nodes (size)
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
while (h != NULL)
{
printf("%d\n", h->n);
size++;
h = h->next;
}
	return (size);
}
