#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free the memory allocations of a dog type
 * @d: a pointer to the dog type to free
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
