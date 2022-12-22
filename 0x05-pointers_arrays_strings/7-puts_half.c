#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a pointer to the string to print
 * Return: nothing (void)
 */

void puts_half(char *str)
{
	int i, count;

	i = 0;
	count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	if (count % 2 == 1)
		count = (count - 1) / 2;
	else
		count /= 2;


	for (; str[count] != '\0'; count++)
		_putchar(str[count]);
	_putchar('\n');
}
