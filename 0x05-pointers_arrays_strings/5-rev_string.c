#include "main.h"

0;276;0c/**
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


	for (j = 0; j <= count / 2; j++)
	{
		hold = s[j];
		s[j] = s[count - j];
		s[count - j] = hold;
	}

}
