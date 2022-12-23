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
		if (char[i] >= 97 && char[i] <= 122)
			char[i] = char[i - 32];
	}

	return (str);
}
