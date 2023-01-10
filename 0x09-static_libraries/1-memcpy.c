#include "main.h"

/**
 * _memcpy - copy n bytes from source memory location to destination
 * @src: the source memory location to copy from
 * @dest: the destination memory location to copy to
 * @n: the number of byte to copy from src to dest
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
