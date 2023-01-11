#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, or 1 otherwise
 */

int main(int argc, char **argv)
{
	unsigned int sum;
	int i;
	char *p;

	sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			p = argv[i];

			while (*p != '\0')
			{
				if (!(*p >= '0' && *p <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				p++;
			}
			sum += (unsigned int) atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
