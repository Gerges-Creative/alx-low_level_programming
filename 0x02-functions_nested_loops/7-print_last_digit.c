#include "main.h"

/**
 * print_last_digit - print the last digit of any given number
 *
 * @n: checker argument
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int n = n * -n;
	}

	int n2 = _putchar((n % 10) + '0');

	return (n2);
}
