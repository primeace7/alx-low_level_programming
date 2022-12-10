#include<stdio.h>
#include<stdlib.h>

/**
* main - Program entry point
*
* Return: 0 (Success)
*/
int main(void)
{

int start;
int stop;
start = '0';
stop = '9';

while (start <= stop)
{
putchar(start);
start++;
putchar(',');
putchar(' ');
}
putchar((int)'\n');

return (0);
}
