#include "dog.h"

/**
 * length - find length of string
 * @str: string
 * Return: length
 */
int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * copystring - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *copystring(char *dest, char *src)
{
	int i;

	for (i = 0; i <= length(src); i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * new_dog - create a new dog profile
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Return struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogx1;
	char *namecpy;
	char *ownercpy;

	dogx1 = malloc(sizeof(dog_t));

	if (dogx1 == NULL)
		return (NULL);

	if (name != NULL)
	{
		namecpy = malloc(length(name) + 1);

		if (namecpy == NULL)
		{
			free(dogx1);
			return (NULL);
		}

		dogx1->name = copystring(namecpy, name);
	}
	else
		return (NULL);


	dogx1->age = age;


	if (owner != NULL)
	{
		ownercpy = malloc(length(owner) + 1);

		if (ownercpy == NULL)
		{
			free(namecpy);
			free(dogx1);
			return (NULL);
		}

		dogx1->owner = copystring(ownercpy, owner);
	}
	else
		return (NULL);


	return (dogx1);
}
