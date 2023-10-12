#include "main.h"

/**
 * print_line - Prints n number of _
 *
 * @n: parameter that indecates the number
 *
 * Return: No return value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
