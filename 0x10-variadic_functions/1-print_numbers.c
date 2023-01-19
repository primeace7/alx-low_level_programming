#include "variadic_functions.h"

/**
 * print_numbers - print all arguments with a separator
 * @separator: the string to print between each number
 * @n: the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	long int hold;
	va_list arg;

	va_start(arg, n);

	for (count = 0; count < n; count++)
	{
		hold = va_arg(arg, long int);
		printf("%ld", hold);
		if (separator != NULL)
			printf("%s", separator);
	}
		va_end(arg);
		printf("\n");
}
