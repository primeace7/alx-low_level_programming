#include "main.h"

/**
 * read_textfile - read text from a file and print to POXSIX stdout
 * @filename: the name of the file to read from
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed, or 0 if none
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer;
	char ch;
	size_t i;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	for (i = 0; i < letters; i++)
	{
		reader = read(fd, &ch, 1);
		if (reader == 0)
		{
			writer = write(STDOUT_FILENO, &ch, 1);
			if (writer == -1)
				return (0);
			break;
		}
		if (reader == -1)
			return (0);
		if (reader == 1)
		{
			writer = write(STDOUT_FILENO, &ch, 1);
			if (writer == -1)
				return (0);
		}
	}
	return (i + 1);
}
