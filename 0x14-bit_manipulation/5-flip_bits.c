#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits to flip number to another.
 *
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;
	unsigned long int x	= n ^ m;

	while (x)
	{
		sum += x & 1;
		x = x >> 1;
	}
	return (sum);
}
