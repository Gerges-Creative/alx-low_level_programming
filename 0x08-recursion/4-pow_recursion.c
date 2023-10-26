#include "main.h"

/**
 * _pow_recursion - calculate the power of a number
 * @x: the number
 * @y: the power to raise
 * Return: return the result
 */
int _pow_recursion(int x, int y)
{
	int sumPow = 1;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (sumPow);
	}

	sumPow = x * _pow_recursion(x, --y);

	return (sumPow);
}
