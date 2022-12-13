#include "main.h"

/**
 * print_alphabet - print the english alphabet in lower case
 *
 * Return: nothing(void)
 */
void print_alphabet(void)
{
int start;
int stop;

start = 'a';
stop = 'z';
while (start <= stop)
{
_putchar(start);
start++;
}
_putchar('\n');
return;
}
