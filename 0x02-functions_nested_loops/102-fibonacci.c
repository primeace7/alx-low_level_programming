#include<stdio.h>

/**
* main - program starting point
*
* Return: always 0(success)
*/
int main(void)
{
int n;
long int term0, term1, term;
term0 = 1;
term1 = 2;
n = 0;

printf("%ld, %ld, ", term0, term1);
while (n < 48)
{
term = term0 + term1;
term0 = term1;
term1 = term;
n++;
if (n == 47)
printf("%ld", term)
else
printf("%ld, ", term);

}
putchar('\n');
return (0); }
