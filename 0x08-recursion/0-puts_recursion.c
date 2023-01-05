#include "main.h"

/**
 * _puts_recursion - print an input string, followed by a newline,
 * with recursion
 * @s: a pointer to the string to be printed
 * Return: nothing (void)
 */

void puts_recursion(char *s)
{
	if (*s == '\n')
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
