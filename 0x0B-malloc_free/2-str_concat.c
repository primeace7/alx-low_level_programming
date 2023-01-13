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
	int lencat, i, j;
	char *dest;

	lencat = slen(s1);
	lencat = lencat + slen(s2) + 1;

	dest = malloc(lencat * sizeof(*dest));
	if (dest == NULL)
		return (NULL);
	if (s1 == NULL)
		lencat += 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			dest[i] = s1[i];
	}
	if (s2 == NULL)
		lencat += 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			dest[i + j] = s2[j];
	}
	if (s1 != NULL || s2 != NULL)
		dest[i + j] = '\0';
	else
		dest[i + j] = '';
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
	else
		return (1 + slen(s + 1));
}
