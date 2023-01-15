#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all the command line arguments of this
 * program into one string
 * @argc: argument count
 * @argv: argument vector
 * Return: pointer to the concatenated string
 */

char *argstostr(int argc, char **argv)
{
	int count, size;
	char *str;


	size = 0;
	if (argc == 0 || argv == NULL)
		return (NULL);

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	/**
	 * calculate  the size in bytes of the first argument and store
	 * for future increments
	 */
	for (count = 0; count < argc; ++count)
	{
		size = size + (sizeof(*(argv[count])) * slen(argv[count])) + 1;
		str = realloc(str, size);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		scopy(argv[count], str);
		scopy("\n", str);
	}

	scopy("\0", str);
	return (str);
}

/**
 * slen - find the length of a string
 * @s: pointer to the string which lenght will be found
 * Return: the length of the string
 */

int slen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (1 + slen(s + 1));
}

/**
 * scopy - copy a string from source to destination memory location
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 * Return: nothing (void)
 */

void scopy(char *src, char *dest)
{
	if (src != NULL)
		*dest = *src;
	if (*src != '\0')
		scopy(src + 1, dest + 1);
}
