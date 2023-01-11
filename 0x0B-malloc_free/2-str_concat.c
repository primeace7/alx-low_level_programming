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

	concat_str(s1, s2, s);

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
 * concat_str - concatenate two strings into a third one
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @s: pointer to the destination string
 * Return: nothing
 */

void concat_str(char *s1, char *s2, char *s)
{
	int all_null, s1_null, s2_null;

	s1 == NULL ? s1_null = 1 : s1_null = 0;
	s2 == NULL ? s2_null = 1 : s2_null = 0;
	s1 == NULL && s2 == NULL ? all_null = 1 : all_null = 0;

	if (all_null)
		*s = '\0';
	else if (s1_null && *s2 != '\0')
	{
		*s = *s2;
		concat_str(s1, s2 + 1, s + 1);
	}
	else if (s2_null && s1 != '\0')
	{
		*s = *s1;
		concat_str(s1 + 1, s2, s + 1);
	}

	if (!(s1_null || s2_null))
	{
		if (*s1 != '\0')
		{
			*s = *s1;
			concat_str(s1 + 1, s2, s + 1);
		}
		if (*s2 != '\0')
		{
			*s = *s2;
			concat_str(s1, s2 + 1, s + 1);
		}
	}
	if (!(all_null))
		*s = '\0';
}
