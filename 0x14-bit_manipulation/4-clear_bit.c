#include "main.h"

/**
 * clear_bit - clear a bit at an index of a number
 * @n: the number which index will be cleared
 * @index: the index (starting from 0) of the number to clear
 * Return: 1, on success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int hold;

	if (index >= 63)
		return (-1);
	hold = 1 << index; /*set hold as mask with 1 at index only*/
	hold = ~hold;
	hold &= *n;
	return (1);
}
