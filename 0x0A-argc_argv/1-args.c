#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * argc: a count of the number of command line arguments, the executable
 * name (command) is included so argc is at least 1 for every program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
