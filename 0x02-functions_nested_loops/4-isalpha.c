#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @alpha: alpha is the checked character
 *
 * Return: 1 (if alpha is a letter of the alphabet)
 */

int _isalpha(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		return (1);
	}
	else if (alpha >= 'A' && alpha <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
