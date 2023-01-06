#include "main.h"

/**
 * go - helper recursive function that finds the sqrt and returns it
 * @n: the number which sqrt will be found
 * @s: a guess variable used to calculate the sqrt
 * Return: the sqrt of n
 */

int go(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n && ((s - 1) * (s - 1) < n))
		return (-1);
	if (s * s > n)
		return (go(n, s - 1));
	if (s * s < 1)
		return (go(n, s + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: the number which square root will be found
 * Return: the natural square root of the nunber, or -1 if it doesn't have
 */

int _sqrt_recursion(int n)
{
	int s;

	s = n / 2;
	return (go(n, s));
}
