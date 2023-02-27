#include "main.h"

/**
 * puts_half - prints half of a string, followed
 * by a new line.
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = (i - 1) / 2;
	while (j <= (i - 1))
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
