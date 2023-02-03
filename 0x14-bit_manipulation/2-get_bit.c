#include "main.h"

/**
 * get_bit - get the bit at an index of a binary word
 * @n: the number to get bit from
 * @index: the index (starting from 0) where a bit will
 * be extracted from n
 * Return: the extracted bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int hold;

	if (index >= 63)
		return (-1);
	hold = 1;
	hold = 1 << index; /*set hold as a mask with 1 only at index position*/
	hold = hold & n;
	hold >>= index; /*shift the extracted bit back to LSB*/
	return (hold);
}
