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

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
		i++;
	}

	char hold[];


	for (j = 0; j <= count; j++)
	{
		hold[j] = s[count - j];
	}

	for (j = 0; j <= count; j++)
		s[j] = hold[j];
}
