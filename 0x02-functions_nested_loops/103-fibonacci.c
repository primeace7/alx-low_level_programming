#include<stdio.h>
#include<stdlib.h>

/**
* main - program starting point
*
* Return: 0 always
*/
int main(void)
{
long int term0, term1, current;
long int sum;
sum = 0;
current = 1;
term0 = 1;
term1 = 2;

while(current < 4000000)
{
current = term0 + term1;
term0 = term1;
term1 = current;

if (current % 2 == 0)
sum += current;
}
printf("%ld\n", sum);
return (0);
}