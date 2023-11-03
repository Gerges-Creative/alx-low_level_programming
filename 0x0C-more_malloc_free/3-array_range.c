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

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
