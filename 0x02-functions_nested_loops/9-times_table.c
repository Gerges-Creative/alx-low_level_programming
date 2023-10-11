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
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			_putchar(z);

			if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (z > 9 && z < 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
