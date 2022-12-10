#include<stdio.h>
#include<stdlib.h>

/**
* main - Program engry point
*
* Return: 0 (Success)
*/
int main(void)
{
int start;
int stop;
int start2;
int stop2;

start = '0';
stop = '9';
start2 = 'a';
stop2 = 'f';

while (start <= stop)
{
putchar(start);
start++;
}

while (start2 <= stop2)
{
putchar(start2);
start2++;
}

putchar('\n');
return (0);
}
