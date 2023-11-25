#include "main.h"

/**
 * get_bit - returns a bit at given index
 * @n: number
 * @index: the index of the bit
 * Return: the value of the bit or -1 upon error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		return (0);
	}

	mask <<= index;

	if (n & mask)
		return (1);
	else
		return(0);
}
