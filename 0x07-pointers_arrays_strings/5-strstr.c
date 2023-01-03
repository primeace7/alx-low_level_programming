#include "main.h"
#include <stddef.h>

/**
 * _strstr - find a substring within another string
 * @needle: the substring to be found
 * @haystack: the string to be searched for a substring
 * Return: a pointer to the of the located substring within the larger string,
 * or NULL, if the substring is not found
 */

char *_strstr(char *needle, char *haystack)
{
	unsigned int i, j, check;

	check = 1;

	if (needle[0] == '')
		return (&haystack[0]);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			for (j = 0; needle[j] != '\0' && check; j++)
			{
				if (needle[j] == haystack[i + j])
					check = 1;
				else
					check = 0;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}
