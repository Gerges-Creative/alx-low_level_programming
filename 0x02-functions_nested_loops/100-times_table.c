#include "main.h"

/**
 * print_times_table - prints the times table n times
 *
 * @n: paramemter to take a number
 *
 * Return: No return value
 */
void print_times_table(int n)
{
	int x, y, z;

	if !(n > 15 || n < 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				z = x * y;

				_putchar(',');
				_putchar(' ');

				if (z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z > 9 && z < 100)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 99)
				{
					_putchar((z / 10) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
			}

			_putchar('\n');
		}
	}
}
