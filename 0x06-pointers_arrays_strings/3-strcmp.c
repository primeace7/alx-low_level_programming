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
		if (s1[i] != s2[i])
		{
			sum1 += (int) s1[i];
			sum2 += (int) s2[i];
			stop = 2;
		}

		else if (s1[i] != '\0' && s2[i] == '\0')
		{
			sum1 += 1;
			stop = 2;
		}

		else if (s2[i] != '\0' && s1[i] == '\0')
		{
			sum2 += 1;
			stop = 2;
		}

		else
			stop = 2;
	}

	return (sum1 - sum2);
}
