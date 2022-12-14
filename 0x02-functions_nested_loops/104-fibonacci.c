#include<stdio.h>
#include<stdlib.h>

/**
* main - program starting point
*
* Return: 0 always
*/
int main(void)
{
double term0, term1, term;
int count;

term0 = 0;
term1 = 1;
count = 0;

while (count < 98)
{
term = term0 + term1;
term0 = term1;
term1 =term;
if (count < 97)
printf("%.lf, ", term);
else
printf("%.lf", term);
count++;

}
return (0);
}
