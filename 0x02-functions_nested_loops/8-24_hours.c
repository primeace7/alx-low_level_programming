#include "main.h"

/**
* jack_bauer - print every minute of the day
* Return: nothing (void)
*/

void jack_bauer(void)
{
int start1, start2, start3, start4, stop1, stop2, stop3, stop4;
start1 = '0';
start2 = '0';
start3 = '0';
start4 = '0';
stop1 = '2';
stop2 = '9';
stop3 = '5';
stop4 = '9';

while (start1 <= stop1)
{
while (start2 <= stop2)
{
while (start3 <= stop3)
{
while (start4 <= stop4)
{
_putchar(start1);
_putchar(start2);
_putchar(':');
_putchar(start3);
_putchar(start4);
_putchar('\n');
start4++;
}
start3++;
start4 = '0';
}
if (start1 == '2' && start2 == '3')
return;
else
{
start2++;
start3 = '0';
start4 = '0';
}
}
start1++;
}
}
