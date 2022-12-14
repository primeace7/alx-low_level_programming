#include<stdio.h>
#include<stdlib.h>

/**
* main - program starting point
*
* Return: 0 always
*/
int main(void)
{
long int term0, term1, term;
int count;

term0 = 0;
term1 = 1;
count = 0;

while (count < 98)
{
term = term0 + term1;
if (count < 97)
printf("%ld, ", term);
else
printf("%ld", term);
count++;

}

}
