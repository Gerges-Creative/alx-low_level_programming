#include "main.h"

/**
 * print_binary - convert and print the binary representation of a number
 * @n: the number
 * Return: NO return
 */
void print_binary(unsigned long int n)
{
	unsigned long int pow2 = 1;
	int i = 0, x;

	while (n > pow2)
	{
		pow2 *= 2;
		i++;
	}

	x = i;

	while (n != 0)
	{
		if (n == pow2)
		{
			_putchar(1 + '0');

			while (i >= 0)
			{
				_putchar(0 + '0');
				i--;
			}
			break;
		}
		else if (n < pow2)
		{
			if (i == x)
				continue;
			else
			{
				_putchar(0 + '0');
				continue;
			}
		}
