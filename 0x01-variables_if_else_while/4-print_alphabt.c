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
start = 'a';
stop = 'z';

while (start <= stop && start != 'e' && start != 'q')
{
putchar(start);
start++;
}
putchar((int)'\n');
return (0);
}
