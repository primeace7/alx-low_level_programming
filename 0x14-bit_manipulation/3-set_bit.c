#include "main.h"

/**
 * set_bit - set a bit at a given index in a number to 1
 * @n: pointer to the number whose nth bit should be set
 * @index: the index (starting from 0) of the word to be set
 * Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int hold;

	if (index >= 63)
		return (-1);
	hold = 1 << index; /* set hold as mask */
	hold = *n | hold;
	hold >>= (index - 1);
	return (1);
}
