#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - Copies the contents of a file another file.
*
* @argc: num argument
* @argv: string argument
*
* Return: 0 on success
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
char buffer[1024];
if (buffer == NULL)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from), exit(99);

while (r == 1024)
{
r = read(file_from, buffer, 1024);
if (r == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

w = write(file_to, buffer, r);
if (w < r)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

if (close(file_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
return (0);
}
}
