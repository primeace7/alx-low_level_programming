#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string to print in reverse
 * Return: nothing(void)
 */

void print_rev(char *s)
{
	int i, count, j;

	i = 0;
	count = 0;
	j = 0;

	while (s[i] != '\0')
	{
		count++;
		++i;
	}
	i = count / 2;

	while (i >= 0)
	{
		s[count - j] = s[j]
		++j;

	}
}
