#include "main.h"

/**
 * alloc_grid - return a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2D array or NUll upon failure
 */

int **alloc_grid(int width, int height)
{
	int **arr2D;
	int i, j;

	if (width <= 0  || height <= 0)
	{
		return (NULL);
	}

	arr2D = (int **)malloc(height * sizeof(int *));

	if (arr2D == NULL)
	{
		free(arr2D);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr2D[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			arr2D[i][j] = 0;
		}

		if (arr2D[i][j] == NULL)
		{
			free(arr2D[i][j]);
			return (NULL):
		}
	}

	return (arr2D);
}
