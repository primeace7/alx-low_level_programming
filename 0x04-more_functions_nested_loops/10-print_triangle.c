#include "main.h"

/**
* print_triangle - print a triangle in the terminal
* @size: the size of the trinagle to print
* Return: void
*/

void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
else if (size == 1)
_putchar('#');

for (i = 1; i <= size; i++)
{
j = i;
k = i;

while (size - j)
{
_putchar(' ');
j++;
}

while (k)
{
_putchar('#');
k--;
}

_putchar('\n');
}
}
