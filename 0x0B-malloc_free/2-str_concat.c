#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings in a third string
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, len3;
	char *s;

	len1 = slen(s1);
	len2 = slen(s2);
	len3 = len1 + len2 + 1;

	s = malloc(len3 * sizeof(char));

	if (s == NULL)
		return (NULL);

	scat(s1, s2, s);

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
 * scat - concatenate two strings into a third one
 * @a: pointer to the first string
 * @b: pointer to the second string
 * @c: pointer to the destination string
 * Return: nothing
 */

void scat(char *a, char *b, char *c)
{
	if ( a == NULL)
	{
		if (*b != '\0')
		{
			*c = *b;
			scat(a, b + 1, c + 1);
		}
	}
	else if (b == NULL)
	{
		if (*a != '\0')
		{
			*c = *a;
			scat(a + 1, b, c + 1);
		}
	else if (*a != '\0')
	{
		*c = *a;
		scat(a + 1, b, c + 1);
	}

	else if (*b != '\0')
	{
		*c = *b;
		scat(a, b + 1, c + 1);
	}

	*(c + 1) = '\0';
}
