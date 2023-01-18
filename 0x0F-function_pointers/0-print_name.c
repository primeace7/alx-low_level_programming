#include "function_pointers.h"

/**
 * print_name - print a person's name
 * @name: the person's name to print
 * @f: pointer to a function that will print the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));
{
	(*f)(name);
}
