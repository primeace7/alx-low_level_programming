#include "main.h"

/**
 * _memset - fill the first n bytes of a memory location with constant bytes
 * @s: the memory location to be filled
 * @b: the constant byte to fill with
 * @n: the number of bytes to fill at location s
 * Return: a pointer to memory location s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
