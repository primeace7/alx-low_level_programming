#include "variadic_functions.h"

/**
 * print_all - print all arguments in the specified format
 * @format: the string that specifies the print format of the arguments
 * Return; nothing
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *s, *hold;

	hold = (char *)format;

	va_start(arg, format);

	while (*hold)
	{
		switch (*hold++)
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%i", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
		{
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		}
		if (*hold)
			printf(",");
	}
	printf("\n");
}
