#include "main.h"

/**
* print_square - print a square whith the # character
*
* @size: the size of the square to print
*
* Return: void
*/

void print_square(int size)
{
int i, j;

for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
if (size == 0)
_putchar('\n');
else
_putchar('#');
}
_putchar('\n'); }
}
