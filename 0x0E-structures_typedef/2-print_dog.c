#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the members of a struct dog type
 * @d: the struct dog type which members should be printed
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *dogname;
		char *dogowner;

		dogname = d->name != NULL ? d->name : "(nil)";
		dogowner = d->owner != NULL ? d->owner : "(nil)";

		printf("Name: %s\n", dogname);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", dogowner);
	}
}
