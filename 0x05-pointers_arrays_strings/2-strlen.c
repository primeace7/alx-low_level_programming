#include "main.h"

/**
 * _strlen - find and return the length of a string
 * @s: the string whose length is to be found
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i, count;

	i = s[i];

	while (i != '\0')
	{
		++count;
		++i;
		i = s[i];
	}
	return (count);

}
