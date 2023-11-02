#include "main.h"

/**
 * malloc_checked - a function to allocate memory using malloc
 * @b: bytes to be allocated
 * Return: pointer to allocated memory or exit if fails
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
