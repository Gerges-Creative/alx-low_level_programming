#include "main.h"

/**
 * print_diagsums - print the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: 2D square array.
 * @size: the size of the square.
 *
 * Return: no return value
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumDia1 = 0, sumDia2 = 0;

	for (i = 0;i < size; i++)
	{
		sumDia1 += a[i][i];
	}

	for (j = size - 1; j >= 0; j--)
	{
		sumDia2 += a[j][j];
	}

	printf("%d, %d\n", sumDia1, sumDia2);
}
