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

	strn = va_arg(str, char *);

	for (i = 0; i < n; i++)
	{
		if (strn != NULL)
			printf("%s", strn);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);

		strn = va_arg(str, char *);
	}

	printf("\n");

	va_end(str);
}
