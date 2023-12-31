#include "main.h"

/**
 * print_number - print a number
 *
 * @n: integer
 *
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int x, multi = 1;

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
		multi *= 10;
	}

	for (; multi >= 1; multi /= 10)
	{
		_putchar(((n / multi) % 10) + '0');
	}
}
