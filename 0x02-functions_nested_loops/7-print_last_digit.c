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
int result;

hold = n / 10;
result = hold * 10;
return (n - result);
}
