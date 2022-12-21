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


	for (j = 0; j <= count / 2; j++)
	{
		hold = s[j];
		s[j] = s[count - j];
		s[count - j] = hold;
	}

}
