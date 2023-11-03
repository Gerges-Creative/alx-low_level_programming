#include "main.h"

/**
 * _calloc - create a calloc function
 * @nmemb: number of elements
 * @size: size of the element
 * Return: pointer to new allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		ptr[i * size] = 0;

	return (ptr);
}
