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

	concat_st(s1, s2, s);

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
 * concat_st - concatenate two strings into a third one
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @s: pointer to the destination string
 * Return: nothing
 */

void concat_st(char *st1, char *st2, char *s)
{
	int all_null, s1_null, s2_null;

        s1_null = st1 == NULL ? 1 : 0;
	s2_null = st2 == NULL ? 1 : 0;
	all_null = (st1 == NULL && st2 == NULL) ? 1 : 0;

	if (all_null)
		*s = '\0';
	else if (s1_null && *st2 != '\0')
	{
		*s = *st2;
		concat_st(st1, st2 + 1, s + 1);
	}
	else if (s2_null && *st1 != '\0')
	{
		*s = *st1;
		concat_st(st1 + 1, st2, s + 1);
	}

	if (!(s1_null || s2_null))
	{
		if (*st1 != '\0')
		{
			*s = *st1;
			concat_st(st1 + 1, st2, s + 1);
		}
		if (*st2 != '\0')
		{
			*s = *st2;
			concat_st(st1, st2 + 1, s + 1);
		}
	}
	if (!(all_null))
		*s = '\0';
}
