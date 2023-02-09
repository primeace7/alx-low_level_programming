#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file to create
 * @text_content: pointer to the content of the file to create
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writer;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writer = write(fd, text_content, strlen(text_content) + 1);
		if (writer == -1)
			return (-1);
	}

	return (1);
}
