#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * init_dog - initialize a struct dog variable with the given members
 * @d: pointer to struct dog type
 * @name: name of dog
 * @age: dog's age
 * @owner: name of dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
