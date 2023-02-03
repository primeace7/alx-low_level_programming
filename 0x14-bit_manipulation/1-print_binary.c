#include "main.h"

/**
 * print_binary - print the binary equivalent of a given number
 * @n: the number which binary equivalent should be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	long unsigned int hold;
	int out, count;

	for (hold = 1, count = 0; hold <= n && n != 0; count++, hold <<= 1)
		; /*sets hold to the highest power of 2 that can't divide n*/
	count--; /* set count to the log of hold in base 2*/

	for (; count >= 0; count--)
	{
		out = n >> count;
		n -= (out << count);
		_putchar(out + '0');
	}
}
