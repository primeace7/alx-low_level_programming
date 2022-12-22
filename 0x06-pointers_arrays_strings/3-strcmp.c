#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: the first string to compare
 * @s2: the second string to compare
 * Return: the difference between s1 and s2 as
 * an integer
 */

int _strcmp(char *s1, char *s2)
{
	int stop1, stop2, i, sum1, sum2;
	int stop;

	stop1 = 0;
	stop2 = 0;
	sum1 = 0;
	sum2 = 0;
	stop = stop1 + stop2;

	for (i = 0; stop != 2; i++)
	{
		if (!stop1)
		{
			if (s1[i] != '\0')
				sum1 += (int) s1[i];
		}
		else
			stop1 = 1;

		if (!stop2)
		{
			if (s2[i] != '\0')
				sum2 += s2[i];
		}
		else
			stop2 = 1;
		stop = stop1 + stop2;
	}

	return (sum1 - sum2);
}
