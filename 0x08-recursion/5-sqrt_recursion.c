#include "main.h"

/**
 * go - helper recursive function that finds the sqrt and returns it
 * @n: the number which sqrt will be found
 * @s: a guess variable used to calculate the sqrt
 * Return: the sqrt of n
 */

int go(int n, int s)
{
	if(n < 0)
		return (-1);
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (go(n, s - 1));
	if (s * s < 1)
		return (go(n, s + 1));

	return (-1);
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number which square root will be found
 * Return: the natural square root of the nunber, or -1 if it doesn't have
 */

int _sqrt_recursion(int n)
{
	int s;
	if (n < 100)
		s = n / 10;
	else if (n < 1000)
		 s = n / 30;
	else if (n < 10000)
		s = n / 100;
	else if (n < 100000)
		s = n / 200;
	else if (n < 1000000)
		s = n / 600;
	return (go(n, s));
}
