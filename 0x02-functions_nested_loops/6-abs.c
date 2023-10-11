#include "main.h"

/**
 * _abs - computes the absolute value of a number
 *
 * @n: integer argument
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		_putchar(n * -1);
	}
	else
	{
		_putchar(n);
	}

	return (n);
}
