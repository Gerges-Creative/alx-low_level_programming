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
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if(ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
