#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - describe a dog with additional information
 * @name: name of the dog is a string
 * @age: age of the dog is a float
 * @owner: owner of the dog is a string
 *
 * Description: the dog and the owner information
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
