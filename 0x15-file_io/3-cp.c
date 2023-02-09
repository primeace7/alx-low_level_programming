#include "main.h"

/**
 * close_error - print a corresponding error message to POSIX STDERR
 * @fd: the file descriptor of the file on which closure was attempted
 * Return: nothing
 */

void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * ops_error - print a corresponding error message to POSIX STDERR
 * @file: the name of the file the process tried to read/write from
 * @ch: a character representing the intended operation: r for read error
 * w for write error
 * Return: nothing
 */

void ops_error(char *file, char ch)
{
	if (ch == 'r')
	{
		dprintf(STDERR_FILENO, "Error; Can\'t read from file %s\n", file);
		exit(98);
	}

	else if (ch == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", file);
		exit(99);
	}

}

/**
 * main - program starting point: this program is a duplicate of cp command
 * @argc: the number of command line arguments passed to the program
 * @argv: the arguvment vector
 * Return: 0 if successful, or one of 97, 98, 99, 100 if there's an error
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, write_to, read_from, closing;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fd_from = open(argv[1], O_RDONLY); /*create file descriptor for source*/
	if (fd_from == -1)
		ops_error(argv[1], 'r');

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 664);
	if (fd_to == -1)
		ops_error(argv[2], 'w');

	read_from = read(fd_from, buffer, 1024);
	for (; read_from > 0; read_from = read(fd_from, buffer, 1024))
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to < 0)
			ops_error(argv[2], 'w');
	}
	if (read_from == -1) /*handle error from the read inside while loop*/
		ops_error(argv[1], 'r');
	closing = close(fd_to);
	if (closing == -1)
		close_error(fd_to);
	closing = close(fd_from);
	if (closing == -1)
		close_error(fd_from);
	return (0);
}
