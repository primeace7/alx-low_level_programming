#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string to be checked
 * @accept: the substring to be checked for
 * Return: the length of the prefix substring found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j, check;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 1;

		for (j = 0; accept[j] != '\0' && check == 1; j++)
		{
			if (s[i] == accept[j])
			{
				++count;
				check = 0;
			}
		}

		if (check)
			return (count);
	}

	return (count);
}
