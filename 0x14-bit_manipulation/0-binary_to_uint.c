#include "main.h"

/**
 * slen - find the lenght of a string
 * @s: pointer to the string which lenght should be found
 * Return: the lenght of the string, excluding null byte
 */

int slen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (1 + slen(s + 1));
}

/**
 * binary_to_uint - convert a set of bits to unsigned int
 * @b: pointer to the set of bits
 * Return: the decimal equivalent of the set of bits in b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, sum;
	int hold;

	sum = 0;
	n = slen((char *)b);

	for (; n > 0; n--)
	{
		hold = *b++;

		if (hold == '1' && n == '1')
			sum += 1;
		else if (hold == '1')
			sum += (1 << (n - 1));
		else if (hold == '0')
			;
		else
			return (0);
	}

	return (sum);
}
