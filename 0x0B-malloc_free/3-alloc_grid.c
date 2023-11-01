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
	int grid, i, j;

	grid = width * height;

	if (width <= 0  || height <= 0)
	{
		return (NULL);
	}

	arr2D = (int **)malloc(grid * sizeof(int));

	if (arr2D == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr2D[i][j] = 0;
		}
	}

	return (arr2D);
}
