#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	long int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = (long int) atoi(argv[1]) * (long int) atoi(argv[2]);
	printf("%ld\n", sum);

	return (0);
}
