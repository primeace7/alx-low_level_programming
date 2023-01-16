#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a structure for dogs
 * @name: the dogs name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
