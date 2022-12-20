#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string to print in reverse
 * Return: nothing(void)
 */

void print_rev(char *s)
{
	int i, count;

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		count++;
		++i;
	}


	while (count <= 0)
	{
		_putchar('s[count]');
		--count;

	}
}
