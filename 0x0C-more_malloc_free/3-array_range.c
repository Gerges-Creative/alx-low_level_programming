#include "main.h"

/**
 * array_range - create an array of integeres
 * @min: the first integer
 * @max: the last integer
 * Return: pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	arr = malloc(max - min);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
