#include "main.h"

/**
* times_table - print the 9 times table
*
* Return: nothing(void)
*/
void times_table(void)
{
int start1, start2, stop1, stop2, count1, count2;
start1 = '0';
start2 = '0';
stop1 = '9';
stop2 = '9';
count1 = 0;
count2 = 0;

while (start1 <= stop1)
{
while (start2 <= stop2)
{
if (start2 <= '9')
_putchar(start2);
else
{
_putchar((count1 *count2) / 10);
_putchar((count1 *count2) % 10);
}
if (start2 < '9')
{
_putchar(',');
_putchar(' ');
}
count2++;
start2++;
}
count2 = 0;
count1++;
start1++;
start2 = '0';
_putchar('\n');
}
}
