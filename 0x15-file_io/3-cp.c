#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *createBuffer(char *file);
void closeFile(int fd);

/**
 * createBuffer - Allocates 1024 bytes for a buffer.
 *
 * @file: The name of the file being read.
 *
 * Return: A pointer file_to a buffer.
 */

char *createBuffer(char *file)
{
	char buffer[1024];

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write file_to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * closeFile - Closes file descripfile_tors (fd).
 *
 * @fd: The file descripfile_tor file_to be closed.
 */

void closeFile(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file file_to another file.
 *
 * @argc: The number of arguments supplied file_to the program.
 * @argv: An array of pointers file_to the arguments.
 *
 * Return: 0 on success.
 *
 * exit conditions:
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written file_to - exit code 99.
 * If file_to or file_file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = createBuffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read file_from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(file_to, buffer, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write file_to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	closeFile(file_from);
	closeFile(file_to);

	return (0);
}
