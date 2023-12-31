#include "main.h"

/**
 * print_diagonal - Prints n times of \ diagonally
 *
 * @n: parameter to take the number to printed accordingly
 *
 * Return: No return value
 */
void print_diagonal(int n)
{
	int i, j, x;

	x = 1;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < x; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

		if (x <= n)
		{
			x++;
		}
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
