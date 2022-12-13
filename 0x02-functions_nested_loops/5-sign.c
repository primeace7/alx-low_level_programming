#include "main.h"

/**
* print_sign - print the sign of the number input
*
* @n : input (int)
*
* Return: 1 if n > 0, 0 if n = 0, or -1 if n < 0
*/
int print_sign(int n)
{
if (n > 0)
return (1);
else
if (n == 0)
return (0);
else
return (-1);
}
