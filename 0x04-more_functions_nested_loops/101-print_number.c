#include "main.h"

/**
 * print_number - prints a given number to the function
 *
 * @n: an integer
 *
 * Return: No return value
 */
void print_number(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	do {
		i = n % 10;
		n = n / 10;

		_putchar(i + '0');

	} while (n > 0);
}
