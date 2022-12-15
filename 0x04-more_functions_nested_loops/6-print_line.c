#include "main.h"

/**
* print_line - draw a straight line in the terminal
*
* @n: the length of the straight line to draw
*
* Return: void
*/

void print_line(int n)
{
if (n <= 0)
_putchar('\n');
else
{
while (n)
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
