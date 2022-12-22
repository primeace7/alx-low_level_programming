#include "main.h"

/**
 * _strcpy - copy a string from src to dest
 * @src: a pointer to the source of the string to copy
 * @dest: a pointer to the destination to copy to
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
