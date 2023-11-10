#include "variadic_functions.h"

/**
 * print_strings - a variadic function to print strings
 * @separator: a provided string to be put between strings
 * @n: number of arguments
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *strn;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strn = va_arg(str, char *);

		if (strn != NULL)
			printf("%s", strn);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
