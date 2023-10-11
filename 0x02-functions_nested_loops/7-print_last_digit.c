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
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
		_putchar(l + '0');
	}
	esle
	{
		_putchar(l + '0');
	}
	
	return (l);
}
