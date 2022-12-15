#include "main.h"

/**
* more_numbers - print the numbers from 0 through 14 ten times,
* and then a new line
*
* Return: void
*/

void more_numbers(void)
{
int count, i, j;
j = 10;

while (j)
{
for (count = 0; count <= 14; count++)
{
i = count;
if (count > 9)
_putchar(1 + '0');

if (i > 9)
i %= 10;

_putchar(i + '0');
}
j--;
_putchar('\n');
}
}
