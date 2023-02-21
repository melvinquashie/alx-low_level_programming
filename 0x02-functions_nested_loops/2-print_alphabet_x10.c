#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase, 10 times, followed by a new line
 *
 * Return: Always 0 (success) 
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
	 alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar (alpha);
		 alpha++;
		}
		_putchar('\n');
		i++;
	}
}