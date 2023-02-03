#include "main.h"

/**
 * flip_bits - find the number of bytes to flip, to make the
 * binary word of one number equal to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, result;

	result = m ^ n;

	while (result > 0)
	{
		count += (result & 1);
		result >>= 1;
	}

	return (count);
}
