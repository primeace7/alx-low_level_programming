#include<stdio.h>
#include<stdlib.h>

/**
* main - program starting point
*
* Return: 0 always
*/
int main(void)
{
long unsigned int term0, term1, term;
int count;

term0 = 0;
term1 = 1;
count = 0;


while (count < 98)
{
term = term0 + term1;
term0 = term1;
term1 = term;
if (count < 97)
printf("%lu, ", term);
else
printf("%lu\n", term);
count++;

}
return (0);
}
