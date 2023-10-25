#include "main.h"

/**
 * factorial - print the factorial of a given number
 *
 * @n: number
 *
 * Return: return -1 if n < 0 or 1 if n is 0 or the factorial
 */
int factorial(int n)
{
	int fa;

	if (n == 0)
	{
		return(1);
	}

	if (n < 0)
	{
		return (-1);
	}

	fa = n * factorial(n - 1);

	return (fa);
}
