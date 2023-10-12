#include "main.h"

/**
 * print_triangle - Prints a triangel of #
 *
 * @size: Parameter that takes in the size of the triangle
 *
 * Return: No return value
 */
void print_triangle(int size)
{
	int i, j, k, x, y;

	x = size - 1; /* Countingt the spaces (' ') */
	y = 1; /* Counting the ('#') */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < x; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < y; k++)
		{
			_putchar('#');
		}

		x--;
		y++;

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
