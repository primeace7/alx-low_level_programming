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
for (i = 0; i <= n; i++)
{
j = i;
while (j)
{
_putchar(' ');
j--;
}

if (i != 0)
_putchar('\\');

_putchar('\n');
}}
