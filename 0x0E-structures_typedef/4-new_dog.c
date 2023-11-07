#include "dog.h"

/**
 * new_dog - create a new dog profile
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Return dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dgo_t *dog;

	if(dog)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
	else
		return (NULL);

	return (dog);
}
