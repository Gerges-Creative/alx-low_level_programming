#include "main.h"

/**
 * print_most_numbers - prints number from 0-9 except for 2 and 4
 *
 *
 *
 * Return: No return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
