#include "main.h"
#define NULL 0

/**
 * *_strchr - locates a character in a string
 *
 * @s: searched string
 *
 * @c: character searched for
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
