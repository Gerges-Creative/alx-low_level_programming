#include "main.h"

/**
 * print_binary - convert and print the binary representation of a number
 * @n: the number
 * Return: NO return
 */
void print_binary(unsigned long int n)
{
	unsigned long int pow2 = 1, mask = 1;
	int len = 0;

	while (n > pow2)
	{
		pow2 *= 2;
		len++;
	}


	if (n < pow2 && n != 0)
		len--;

	if (mask > 0)
		mask <<= len;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar(1 + '0');
		}
		else
		{
			_putchar(0 + '0');
		}

		mask >>= 1;
	}
}
