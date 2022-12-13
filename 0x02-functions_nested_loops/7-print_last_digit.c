#include "main.h"

/**
* print_last_digit - print the last digit of the input
*
* @n: input (int)
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
int hold;
int res;
int ret;

hold = n / 10;
res = hold * 10;
ret = n - res;
_putchar(ret);
return (ret);
}
