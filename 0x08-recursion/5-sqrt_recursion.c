#include "main.h"

/**
 * check_sqrt - checks integer as possible square root
 * _sqrt_recursion - returns the natural square root
 * of a number
 *
 * @n: n integer
 * @x: integer to start checking for square root
 * from
 * 
 * 
 * Return: -1 if n has no square root or
 * resulting square root.
 */

int check_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x > n / x)
		return (check_sqrt(n, x - 1));
	else if (x < n / x)
		return (check_sqrt(n, x + 1));
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_sqrt(n, start));
}
