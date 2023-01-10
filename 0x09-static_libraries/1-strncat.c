#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to concatenate from src to dest
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count;

	count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[count + i] = src[i];
	}

	dest[count + i] = '\0';
	return (dest);
}
