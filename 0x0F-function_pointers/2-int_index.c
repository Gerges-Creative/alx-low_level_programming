#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer and return ints index
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function that compares integers
 * Return: return index of the integer if found otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);


	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			    return (i);
		}
	}

	return (-1);
}
