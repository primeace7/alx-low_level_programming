#include "main.h"
#include<stdio.h>

/**
* print_to_98 - print every successive numer from the input to 98
*
* @n: int, the input from which to print until 98
*
*/
void print_to_98(int n)
{

if (n >= 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}

else
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
}
printf("\n");
}
