#include "function_pointers.h"

/**
 * array_iterator - an array of function that executes every function
 * whenever called
 *
 * @array: an array of integers
 * @size: size of the array
 * @action: pointer to function
 * Retrun: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
