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
	int x, count;

	count = 1;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
		n = -n;
	}
	else
	{
		x = n;
	}

	while (x > 9)
	{
		x = x / 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + '0');
	}
}
