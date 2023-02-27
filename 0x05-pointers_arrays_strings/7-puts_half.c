#include "main.h"

/**
 * puts_half - prints half of a string, followed
 * by a new line.
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i, j, mid;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	
	mid = i / 2;
  j = 0;
	while (j <= mid)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
