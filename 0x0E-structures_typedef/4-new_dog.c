#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog of type struct dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newbie;

	newbie = malloc(sizeof(dog_t));
	if (newbie == NULL)
		return (NULL);
	newbie->name = name;
	newbie->owner = owner;
	newbie->age = age;

	return (newbie);
}
