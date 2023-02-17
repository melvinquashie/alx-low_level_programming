#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possible different combinations
 * of two digits. Notice the pattern:
 * 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13,
 * 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27,
 * 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47,
 * 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79,
 * 89
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b;

for (a = '0'; a <= '9'; a++)
{

for (b = a + 1; b <= '9'; b++)
{

putchar(a);
putchar(b);

if (a != '8' || b != '9')
{

putchar(',');
putchar(' ');

}

}

}
putchar('\n');
return (0);
}
