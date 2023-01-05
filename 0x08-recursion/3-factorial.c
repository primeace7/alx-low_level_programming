#include "main.h"

/**
 * factorial - return the factorial of an integer input
 * @n; the input which factorial will be returned
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return(n * factorial(n-1));
}
