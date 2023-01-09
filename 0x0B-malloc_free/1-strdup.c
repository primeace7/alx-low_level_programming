#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - duplicate an input string in a new memory location on the heap
 * @str: the string to be duplicated
 * Return: a pointer to the duplicate string, or NULL if str == NULL, or NULL
 * if the operation failed
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = malloc(slen(str) * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	scpy(str, s);
	return (s);
}

/**
 * slen - find the length of a string
 * @s: pointer to the string which length is to be found
 * Return: the length of the string
 */

int slen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + slen(s + 1));
}

/**
 * scpy - copy the conent of one string to another
 * @a: the source string
 * @b: the destination string
 * Return: nothing
 */

void scpy(char *a, char *b)
{
	if (*a == '\0')
		*b = *a;
	else
	{
		*b = *a;
		(scpy(a + 1, b + 1));
	}
}
