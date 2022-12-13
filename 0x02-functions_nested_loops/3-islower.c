#include "main.h"

/**
* _islower - check if the input is a lower case character
*
* @c: int
* Return: int (1 if lower, 0 otherwise)
*/

int _islower(int c)
{
int start;
int stop;

start = 'a';
stop = 'z';

while (start <= stop)
{
if (start == c)
return (1);
start++;
}
return (0);
}
