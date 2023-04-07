#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: pointer to the file.
 * @letters: The number of letters read and printed.
 *
 * Return: if success return number of letter, else return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters + 1);

	ssize_t r, w;
  /**
   * @r - read
   * @w - written
  */

	if (filename == NULL)
		return (0);

	if (f == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	r = read(f, buffer, letters);
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
		return (0);

	free(buffer);
close(f);

	return (r);
}
