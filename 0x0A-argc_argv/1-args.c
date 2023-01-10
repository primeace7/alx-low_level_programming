#include "main.h"
#include <stdio.h>

/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: program exit status
 */

int main(int argc, __attribute__ ((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
