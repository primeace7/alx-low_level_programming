#include "main.h"

/**
 * main - program starting point: this program is a duplicate of cp command
 * @argc: the number of command line arguments passed to the program
 * @argv: the arguvment vector
 * Return: 0 if successful, or one of 97, 98, 99, 100 if there's an error
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, write_to, closing;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);        }
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);        }

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", argv[1]);
		exit(98);        }

	while (read(fd_from, buffer, 1024) != 0)
	{
		write_to = write(fd_to, buffer, 1024);
		if (write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", argv[2]);
		}        }
	closing = close(fd_to);
	if (closing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100); }
	closing = close(fd_from);
	if (closing == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100); }
	return (0);
}
