#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * ((unused)) attribute used in place of void
 * since we print out argv[0] = name
 * of program, without any input
 *
 * Return: (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
