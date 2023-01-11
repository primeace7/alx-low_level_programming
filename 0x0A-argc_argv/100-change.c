#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program starting point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char **argv)
{
	int count, change;

	count = 0;
	change = (int)atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
		printf("%d\n", 0);
	while (change >= 25)
	{
		count += change / 25;
		change %= 25;
	}
	while (change >= 10)
	{
		count += change / 10;
		change %= 10;
	}
	while (change >= 5)
	{
		count += change / 5;
		change %= 5;
	}
	while (change >= 2)
	{
		count += change / 2;
		change %= 2;
	}
	if (change == 1)
		count += 1;
	if (chage != 0)
		printf("%d\n", count);
	return (0);
}
