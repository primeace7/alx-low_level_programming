#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all input arguments
 * @n: the number of input arguments
 * Return: the sum of all input arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list arg;

	sum = 0;
	va_start(arg, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
