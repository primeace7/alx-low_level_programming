#include "main.h"
#include <stdio.h>

/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
