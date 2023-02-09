#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file to append text to
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_out;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_out = write(fd, text_content, strlen(text_content));

		if (write_out == -1)
			return (-1);
	}

	return (1);
}
