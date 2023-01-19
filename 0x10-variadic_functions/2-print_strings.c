#include "variadic_functions.h"

/**
 * print_strings - print all string arguments with a separator
 * @separator: the string to print between each string argument
 * @n: the number of stirng arguments passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list arg;

	va_start(arg, n);

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			if (va_arg(arg, char *) != NULL)
				printf("%s", va_arg(arg, char *));
			else
				printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
	}
		va_end(arg);
		printf("\n");
}
