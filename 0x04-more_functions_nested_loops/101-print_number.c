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
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}

		_putchar((n % 10) + '0');
	}
}
