#include<stdio.h>
#include<stdlib.h>

/**
* isprime - determine if an input number is a prime number
* @n: the number to be checked
* Return: 1 if n is a prime number, 0 otherwise
*/
int isprime(int n)
{
long int i;

if (n <= 1)
return (0);

for (i = 1; i <= n; i++)
{
if (n % i == 0)
return (0);
}
return (1);
}


/**
* main - program starting point
*
* Return: 0 always
*/

int main(void)
{
long int i;
long int largest;

for (i = 1; i <= 612852475143; i++)
{

if ((isprime(i) == 1) && (612852475143 % i == 0))
largest = i;
}

printf("%ld\n", largest);
return (0);
}
