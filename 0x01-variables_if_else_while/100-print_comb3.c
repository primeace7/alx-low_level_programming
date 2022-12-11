#include<stdio.h>
#include<stdlib.h>

/**
* main - Program entry point
*
* Return: 0 (Success)
*/
int main(void)
{
int start1;
int stop1;
int start2;
int stop2;

start1 = '0';
stop1 = '8';
start2 = '1';
stop2 = '9';

while (start1 <= stop1)
{
while (start2 <= stop2)
{
putchar(start1);
putchar(start2);
if (start1 != '8')
{
putchar(',');
putchar(' ');
}
start2++;
}
start2 = start1 + 2;
start1++;
}
putchar('\n');
return (0);
}
