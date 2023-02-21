#include "main.h"

/**
 * print_alphabet - prints alphabet from 'a' to 'z'
 *
 * Return: Always 0 (sucess)
*/

void print_alphabet(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
