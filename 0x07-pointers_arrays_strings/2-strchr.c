#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string where a character is to be located
 * @c: the character to be located in the string
 * Return: a pointer to the first occurrence of the character in the string
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)

	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
