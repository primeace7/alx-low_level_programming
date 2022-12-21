#include "main.h"

/**
 * rev_string - reverse an input string
 *
 * @s: a pointer to the string to be reversed
 *Return: nothing (void)
 */


void rev_string(char *s)
{
	int i, count, j;
	char hold;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		++count;
		++i;
	}

	i = count / 2;

	for (j = 0; j <= i; j++)
	{
		hold = s[j];
		s[j] = s[count - 1 - j];
		s[count - 1 - j] = hold;
	}

}
