#include "main.h"

/**
 * print_binary - print the binary equivalent of a given number
 * @n: the number which binary equivalent should be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int hold;
	unsigned long int out;
	unsigned long int count;

	hold = 1;
	count = 0;

	for (; hold <= n; count++, hold <<= 1)
		; /*sets hold to the highest power of 2 that can't divide n*/
	if (n != 0)
		count--; /* set count to the log of hold in base 2*/

	for (; (count + 1) >= 1; count--)
	{
		if (n == 0 || n == 1)
		{
			_putchar(n + '0');
			n = n - (out << count);
		}
		else
		{
			out = n >> count;
			_putchar(out + '0');
			n = n - (out << count);
		}
	}
}
