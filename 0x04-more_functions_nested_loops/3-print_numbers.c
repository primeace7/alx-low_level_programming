#include "main.h"

/**
* print_numbers - print the numbers from 0 through 9, followed by a newline
* Return: void
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
