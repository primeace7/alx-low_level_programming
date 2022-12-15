#include "main.h"

/**
* print_diagonal - draw a diagonal line in the terminal
*
* @n: the length of the line to draw
*
* Return: void
*/

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
_putchar('\n');
for (i = 1; i <= n; i++)
{
j = i;
while (j - 1)
{
_putchar(' ');
j--;
}

_putchar('\\');

_putchar('\n');
}}
