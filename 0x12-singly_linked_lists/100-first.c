#include "lists.h"

/**
 * print_before_main - print a string before main executes
 * Return: none
 */

void __attribute__ ((constructor)) print_before_main(void)
{
	char *st1, *st2;

	st1 = "You're beat! and yet, you must";
	st2 = "allow, \nI bore my house upon my back!\n";
	strcat(st1, st2);
	printf("%s", st1);
}
