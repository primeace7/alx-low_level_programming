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
	char ch[100];
	size_t i;

	i = 1;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	reader = read(fd, ch, 100);
	for (; reader > 0; reader = read(fd, ch, 100))
	{
		while (i <= letters && (i % 100) <= 100)
		{
			_putchar(ch[i % 100]);
			i++;
		}
	}
	if (reader < 0)
		return (0);
	close(fd);
	return (i);
}
