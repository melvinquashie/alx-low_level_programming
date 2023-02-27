#include "main.h"

/**
 * _puts - a function that prints a string, followed by
 * a new line, to stdout.
 *
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
int p = 0;

while (*(str + p) != '\0')
{
_putchar(*(str + p));
p++;
}
_putchar('\n');
}
