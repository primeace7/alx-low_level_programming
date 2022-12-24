#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string to capitalize
 * Return: a pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				while (i != 0 && (str[i - 1] == ' ' ||\
str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] ==\
',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!'\
|| str[i-1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' ||\
str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}'))
					str[i] -= 32;
			}
		}
	}
	return (str);
}
