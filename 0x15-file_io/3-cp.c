#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void close_file(int fd);

/**
 * main - Copies the contents "from" a file "to" another file.
 *
 * @argc: The number of arguments supplied file_to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success).
 *
 * exit conditions:
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

if (buffer == NULL)
{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
}

	int file_from = open(argv[1], O_RDONLY);
	int r = read(file_from, buffer, 1024);
	int file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		int w = write(file_to, buffer, r);

		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file_to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	}
while (r > 0);

	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}


/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
