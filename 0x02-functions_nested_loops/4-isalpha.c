#include "main.h"

/**
* _isalpha - check for an alphabetic character, upper or lower case
*
* @c: input (int)
*
* Return: int (0 or 1)
*/

int _isalpha(int c)
{
int start_upper;
int stop_upper;
int stop_lower;

start_upper = 'A';
start_lower = 'a';
stop_upper = 'Z';

while (start_upper <= stop_upper)
{
if (start_upper == c || start_lower == c)
return (1);
start_lower++;
start_upper++;
}
return (0);
}
