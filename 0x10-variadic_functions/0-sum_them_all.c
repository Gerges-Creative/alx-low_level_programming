#include "variadic_function.h"

/**
 * sum_them_all - a variadic function to sum numbers
 * @n: number of variables recieved
 * Return: int result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);

	return (sum);
}
