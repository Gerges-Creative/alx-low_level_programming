#include "main.h"

/**
 * set_bit - locate and change the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit
 * Return: 1 if it works or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int indx)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
