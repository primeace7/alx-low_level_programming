#include "main.h"

/**
 * is_palindrome - determine if a string is a palindrome
 * @s: pointer to the string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len, res;

	len = slen(s);
	res = comp(s, len);

	return (res);
}

/**
 * slen - find the length of a string
 * @s: pointer to the string which length to find
 * @n: placeholder variable to store the string length
 * Return: the length of the string
 */

int slen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + slen(s + 1));
}

/**
 * comp - compares the characters in a string to know if it's a palindrome
 * @s: the string to check
 * @n: the length of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int comp(char *s, int n)
{
	if (n == 0)
		return (1);
	if ((n - 1) && (*s == *(s + n - 1)))
	{
		if (n == 2 || n == 3)
			return (1);
		return (comp(s + 1, n - 2));
	}
	return (0);
}
