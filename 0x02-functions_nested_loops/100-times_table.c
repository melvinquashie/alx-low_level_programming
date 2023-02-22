#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: integer used to get times table
 */

void print_times_table(int n)
{
	int row, column, product, x, y;
if (n >= 0 && n <= 15)
{
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
		 x = product / 10;
			y = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
        _putchar(' ');
				_putchar(y + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
        _putchar(' ');
				_putchar(x + '0');
				_putchar(y + '0');
			}
		}
		_putchar('\n');
	}
}
}
