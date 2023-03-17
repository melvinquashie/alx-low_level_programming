#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * just simply adding space in the array
 *
 * @nmemb: number of members
 * @size: number of bytes
 *
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);
}
