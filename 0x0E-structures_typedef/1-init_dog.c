#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: memory address for the variable
 * @name:name of Dog
 * @age: age of Dog
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
