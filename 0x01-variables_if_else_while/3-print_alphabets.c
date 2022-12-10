#include<stdio.h>
#include<stdlib.h>

/**
* main - Program entry point
*
* Return: 0 (Success)
*/
int main(void)
{
int start_lower;
int stop_upper;
int start_upper;
int stop_lower;

start_lower = 'a';
stop_upper = 'Z';
stop_lower = 'z';
start_upper = 'A';

while (start_lower <= stop_lower)
{
putchar(start_lower);
start_lower++;
}

while (start_upper <= stop_upper)
{
putchar(start_upper);
start_upper++;
}

putchar((int)'\n');
return (0);
}
