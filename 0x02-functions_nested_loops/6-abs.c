#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @i: i is the checked integer
 *
 * Return: i or -i
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
