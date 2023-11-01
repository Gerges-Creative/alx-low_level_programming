#include "main.h"

/**
 * create_array - self-made malloc function
 * @size: size of the array of chars
 * @c: char c
 * Return: pointer or null if size is zero or it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
