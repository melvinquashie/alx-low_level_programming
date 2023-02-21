#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @i: the integer checked to get the last digit from
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
		i = -i;

	last_digit = i % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
