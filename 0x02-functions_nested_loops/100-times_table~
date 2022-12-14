#include "main.h"

/**
* times_table - print the 9 times table
*
* Return: nothing(void)
*/
void times_table(void)
{
int count1, count2;
count1 = 0;
count2 = 0;

while (count1 <= 9)
{
while (count2 <= 9)
{
if ((count1 * count2) <= 9)
{
_putchar((count1 * count2) +'0');
if (count2 < 9)
{
_putchar(',');
_putchar(' ');
if (((count2 + 1) * count1) <= 9)
_putchar(' '); }
}
else
{
_putchar((count1 * count2) / 10 + '0');
_putchar((count1 * count2) % 10 + '0');
if (count2 < 9)
{
_putchar(',');
_putchar(' ');
}
}
count2++;
}
count2 = 0;
count1++;
_putchar('\n');
}
return;
}
