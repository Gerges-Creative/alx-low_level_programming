#include "main.h"

/**
 * create_array - self-made malloc function
 * @size: size of the array of chars
 * @c: char c
 * Return: pointer or null if size is zero or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array[size];
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;

		if (array[i] != c)
		{
			return (NULL);
		}

		i++;
	}

	return (array);
}
