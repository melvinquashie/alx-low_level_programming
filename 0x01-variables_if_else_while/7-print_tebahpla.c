#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: prints the alphabet in lowercase and in reverse
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z' ; c <= 'a' ; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
