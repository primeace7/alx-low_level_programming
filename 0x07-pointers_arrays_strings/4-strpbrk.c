#include "main.h"

/**
 * _strpbrk - search a string for any set of bytes
 * @s: the string to be seached
 * @accept: the set of bytes to be searched for
 * Return: a pointer to the byte in s that matches any byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
