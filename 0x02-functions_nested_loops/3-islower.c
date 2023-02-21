#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @alpha: alpha is the checked character
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
