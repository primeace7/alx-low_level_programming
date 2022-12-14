#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int count;

	count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}

	dest[count + i] = '\0';
	return (dest);
}
