#include "dog.h"

/**
 * init_dog - initialises a struct dog
 * @d: the address of the dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
