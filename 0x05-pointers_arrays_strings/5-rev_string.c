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

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
		i++;
	}

	i = count / 2;


	for (j = 0; j <= i; j++)
	{
		hold = s[count - j];
		s[count - j] = s[j];
		s[j] = hold;
	}
}
