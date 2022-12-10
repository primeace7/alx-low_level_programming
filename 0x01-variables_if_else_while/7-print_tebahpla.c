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
start = 'z';
stop = 'a';

while (start >= stop)
{
putchar(start);
start--;
}
putchar((int)'\n');
return (0);
}
