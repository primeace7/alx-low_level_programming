#include "main.h"

/**
* print_alphabet_x10 - print 10 sets of the entire alphabet in lower case
*
* Return: nothing(void)
*/

void print_alphabet_x10(void)
{
int start;
int stop;
int start2;

start = 'a';
stop = 'z';
start2 = '0';

while (start2 <= '9')
{
while (start <= stop)
{
_putchar(start);
start++;
}
start2++;
}
_putchar('\n');
return (0);
}
