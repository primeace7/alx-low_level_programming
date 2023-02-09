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
	char *buf;


	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	reader = read(fd, buf, letters);
	if (reader == -1)
		return (0);

	writer = write(STDOUT_FILENO, buf, reader);
	if (writer < 0)
		return (0);

	close(fd);
	free(buf);

	return (reader);
}
