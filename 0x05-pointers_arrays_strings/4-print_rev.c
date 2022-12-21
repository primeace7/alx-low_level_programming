#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string to print in reverse
 * Return: nothing(void)
 */

void print_rev(char *s)
{
	int count, i;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}


	for (i = count; i >= 0; --i)
	{
		_putchar(s[i]);
	}
}
