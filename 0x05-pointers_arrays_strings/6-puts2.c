#include "main.h"

/**
 * puts2 - prints every other character of a string
 * followed by a new line
 *
 * @str: string to test
 */

void puts2(char *str)
{
int i, j;



for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < i; j += 2)
{
_putchar(str[j]);
}

}

_putchar('\n');
}
