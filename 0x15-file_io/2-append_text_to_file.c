#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 (failure), 1 (success).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	w = write(f, text_content, len);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
