#include "main.h"

/**
 * is_prime_number - determine if input number is prime
 * @n: the number to check for primality
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (go(n, n - 1));
}

/**
 * go - helper function that determines the primality of input
 * @n: the number to check for primality
 * @s: a placeholder variable to divide n
 * Return: 1 if n is prime, 0 otherwise
 */

int go(int n, int s)
{
	if (s == 1)
		return (1);
	if (n == 1)
		return (0);
	if (n < 1)
		return (0);
	if (n % s == 0)
		return (0);
	else
		return (go(n, s - 1));
}
