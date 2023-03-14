#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer to newly allocated space in memory or
 * Returns NULL if str = NULL or
 * returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int length, i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	array = malloc(length * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < length + 1; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
