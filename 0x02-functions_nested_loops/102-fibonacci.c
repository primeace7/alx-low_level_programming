#include<stdio.h>

/**
* main - program starting point
*
* Return: always 0(success)
*/
int main(void)
{
int term0, term1, term, n;
term0 = 1;
term1 = 2;
n = 0;

while (n < 48)
{
term = term0 + term1;
term0 = term1;
term1 = term;
n++;
printf("%d, ", term);

}
return (0); }
