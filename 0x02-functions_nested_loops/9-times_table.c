#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int row, column, product, x, y;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
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
				_putchar(y + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x + '0');
				_putchar(y + '0');
			}
		}
		_putchar('\n');
	}
}
