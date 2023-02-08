#include "main.h"

/**
 * read_textfile - read text from a file and print to POXSIX stdout
 * @filename: the name of the file to read from
 * @letters: the number of letters to read and print
 * Return: the number of letters read and printed, or 0 if none
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1];
	int fd, out;
	size_t i;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	for (i = 0; i < letters; i++)
	{
		out = read(fd, buf, 1);
		if (out == -1)
			return (0);
		out = write(STDOUT_FILENO, buf, 1);
		if (out == -1)
			return (0);
	}
	buf[0] = '\0';
	out = write(STDOUT_FILENO, buf, 1);
	if (out == -1)
		return (0);
	out = close(fd);
	if (out == -1)
		return (0);
	return (i + 1);
}
