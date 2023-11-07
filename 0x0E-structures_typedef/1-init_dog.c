#include "dog.h"

/**
 * init_dog - a function that initialize struct dog
 * @d: pointer to the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: No return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
