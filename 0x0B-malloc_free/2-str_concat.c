#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string (success), NULL (failure) 
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}

	len = len1 + len2;

	array = (char*) malloc(len * sizeof(char) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];
	for (i = 0; i < len2 + 1; i++)
		array[i + len1] = s2[i];

	return (array);
}