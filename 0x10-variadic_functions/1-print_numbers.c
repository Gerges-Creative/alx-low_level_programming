#include "variadic_functions.h"

/**
 * print_numbers - a variadic function to print numbers
 * @separator: a string separator between the numbers
 * @n: number of variables or arguments
 * Return: No reutrn
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (separator != NULL && i < n - 1)
			printf(", ");
	}

	printf("\n");

	va_end(ptr);
}
