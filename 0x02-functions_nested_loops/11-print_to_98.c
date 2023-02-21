#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints all natural numbers from i to 98,
 * followed by a new line
 *
 * @i: print from this number
 */

void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
else
{
	printf("98\n");
}
}
