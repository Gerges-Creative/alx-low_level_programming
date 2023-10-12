#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: No return value
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		_putchar('0');

		for (y = 1; y < 10; y++)
		{
			z = x * y;

			_putchar(',');
			_putchar(' ');

			if (z < 10)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
