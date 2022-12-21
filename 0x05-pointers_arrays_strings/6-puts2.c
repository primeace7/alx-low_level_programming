#include "main.h"

/**
 * puts2 - print every other character of a string,
 * starting with the first character
 * @str: a char pointer to the string to print
 * Return: nothing(void);
 */

void puts2(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
}
