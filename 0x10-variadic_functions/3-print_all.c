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
	int found;

	hold = (char *)format;
	found = 0;

	va_start(arg, format);

	while (*hold)
	{
		switch (*hold++)
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			found = 1;
			break;
		case 'i':
			printf("%i", va_arg(arg, int));
			found = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			found = 1;
			break;
		case 's':
		{
			s = va_arg(arg, char *);
			if (s == NULL)
			{
				printf("(nil)");
				found = 1;
				break;
			}
			printf("%s", s);
			found = 1;
			break;
		}
		}
		if (*hold)
		{
			printf(",");
			found = 0;
		}
	}
	printf("\n");
}
