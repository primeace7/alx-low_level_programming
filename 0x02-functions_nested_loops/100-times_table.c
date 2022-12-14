#include "main.h"

/**
* print_times_table - print the n times table
*
* @n: int, the times number to print
* Return: nothing(void)
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int count1;
int count2;
count1 = 0;
count2 = 0;

while (count1 <= n)
{
while (count2 <= n)
{
if ((count1 * count2) <= n)
{
_putchar((count1 * count2) + '0');
if (count2 < n)
{
_putchar(',');
_putchar(' ');
if (((count2 + 1) * count1) <= n)
_putchar(' '); } }
else
{
if (n * n < 100)
{
_putchar((count1 * count2) / 10 + '0');
_putchar((count1 * count2) % 10 + '0'); }
if (n * n > 100)
{
_putchar((count1 * count2) / 100 + '0');
_putchar(((count1 * count2) % 100) / 10 + '0');
_putchar((((count1 * count2) % 100) / 10) % 10 + '0'); }
if (count2 < n)
{
_putchar(',');
_putchar(' '); } }
count2++; }
count2 = 0;
count1++;
_putchar('\n'); }
return; }
