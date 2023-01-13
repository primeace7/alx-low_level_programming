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
	int len1, len2, len3, s1_null, s2_null, all_null;
	char *dest;

	len1 = slen(s1);
	len2 = slen(s2);
	len3 = len1 + len2 + 1;
	dest = malloc(len3 * sizeof(char));
	if (dest == NULL)
		return (NULL);
	s1_null = is_null(s1);
	s2_null = is_null(s2);
	all_null = (is_null(s1) && is_null(s2));

	if (all_null)
	{
		*dest = '\0';
		return (dest);
	}
	if (s1_null || *s1 == '\0')
	{
		scopy(s2, dest);
		return (dest);
	}
	if (s2_null || *s2 == '\0')
	{
		scopy(s1, dest);
		return (dest);
	}

	scopy(s1, dest);
	scopy(s2, dest + len1);

	return (dest);
}

/**
 * slen - find the length of a string
 * @s: pointer to the string which length is to be found
 * Return: the length of the string
 */

int slen(char *s)
{
	if (*s == '\0' || s == NULL)
		return (0);
	return (1 + slen(s + 1));
}

/**
 * scopy - copy a string from one memory location to another
 * @s: pointer to the source string
 * @d: pointer to the destination string
 * Return: nothing
 */

void scopy(char *s, char *d)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		*d = *s;
	*d = *s;
}

/**
 * is_null - check if a string is null
 * @s: pointer to the string to check
 * Return: 1 if the string is null, 0 otherwise
 */

int is_null(char *s)
{
	if (s == NULL)
		return (1);
	else
		return (0);
}
