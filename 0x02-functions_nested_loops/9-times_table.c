#include "main.h"

/**
* times_table - print the 9 times table
*
* Return: nothing(void)
*/
void times_table(void)
{
int start1, start2, stop1, stop2;
start1 = '0';
start2 = '0';
stop1 = '9';
stop2 = '9';

while (start1 <= stop1)
{
while (start2 <= stop2)
{
_putchar(start1);
if (start1 < 9)
{
_putchar(',');
_putchar(' ');
}
start1++;
}
start2++;
start1 = '0';
}
}
