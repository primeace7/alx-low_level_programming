#include<stdio.h>
#include<stdlib.h>

/**
* main - Program starting point
*
* Return: 0 (Success)
*/
int main(void)
{
int start1, start2, start3, stop1, stop2, stop3;
start1 = '0';
start2 = '1';
start3 = '2';
stop1 = '7';
stop2 = '8';
stop3 = '9';

while (start1 <= stop1)
{
while (start2 <= stop2)
{
while (start3 <= stop3)
{
putchar(start1);
putchar(start2);
putchar(start3);

if (start1 != '7')
{
putchar(',');
putchar(' ');
}
start3++;
}
start2++;
start3 = start2 + 1;
}
start1++;
start2 = start1 + 1;
start3 = start2 + 1;
}
putchar('\n');
return (0);
}
