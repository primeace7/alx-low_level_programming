#include<stdio.h>
#include<stdlib.h>

void reverse(char *s, int count)
{
	int i = count / 2;
	int j;
	char hold;

	for (j = 0; j <= i; j++)
	{
		hold = s[count -j];
		s[count -j] = s[j];
		s[j] = hold;
	}
}

int count(char *s)
{
	int i, count;
	count = 0;
	i = 0;

	while (s[i] != '\0');
	{
		count++;
		i++;
	}
	return (count);
}

int main(void)
{
	char *str = "This is a test!";
	char st[13] = "Osaruonamen";
	int s1 = count(str);
	int s2 = count(st);

	printf("The string is %d characters long.\n", s1);
/*	reverse(st, s2);
	printf("Your name reversed is: %s\n", st); */
	return (0);
}
