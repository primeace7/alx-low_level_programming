#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the members of a struct dog type
 * @d: the struct dog type which members should be printed
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	char *dogname;
	char *dogowner;

	dogage = d->age != NULL ? atoid->age : "(nil)";
	dogname = d->name != NULL ? d->name : "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", dogname);
		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s\n", d->owner);
	}
}
