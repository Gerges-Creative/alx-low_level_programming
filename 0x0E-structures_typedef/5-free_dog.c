#include "dog.h"

/**
 * free_dog - free memory allocated to dog_t
 * @d: pointer to dog_t(any dog)
 * Return: NO return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);

		if (d->owner)
			free(d->owner);

		free(d);
	}
}
