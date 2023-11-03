#include "main.h"

/**
 * _realloc - reallocate a new memory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: is the current size of ptr
 * @new_size: is the new size that will be allocated
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2;
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
			return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
	{
		free(ptr2);
		return(NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		ptr2[i] = ptr[i];
	}

	free(ptr);
	return (ptr2);
}
