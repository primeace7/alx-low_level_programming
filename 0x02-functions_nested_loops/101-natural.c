#include<stdio.h>

/**
* main - program entry point
*
* Return: nothing(void)
*/
int main(void)
{
int sum, n;
sum = 0;
n = 0;

while (n < 1024)
{
if ((n % 3 == 0) || (n % 5 == 0))
sum += n;

n++;
}
printf("%d\n", sum);
return (0);
}
