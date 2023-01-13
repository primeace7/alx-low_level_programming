#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allcate memory using malloc and terminate with an
 * exit status
 * @b: the number of bytes to allcate in memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p != NULL)
		return (p);
	exit(98);
}
