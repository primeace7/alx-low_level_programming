#include "main.h"

void print_alphabet(void)
{
int start;
int stop;

start = 'a';
stop = 'z';
while (start <= stop)
{
_putchar(start);
start++;
}
_putchar('\n');
return;
}
