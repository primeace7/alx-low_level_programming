#include "main.h"

/**
 * string_toupper - change all lowercase characters of a string to upper case
 * @str: the string to change
 * Return: a pointer to str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = char(str[i] - 32);
	}

	return (str);
}
