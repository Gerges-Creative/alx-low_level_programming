#include "variadic_functions.h"

/**
 * char_format - prints char
 * @xformat: valist
 */
void char_format(va_list xformat)
{
	printf("%c", va_arg(xformat, int));
}

/**
 * int_format - prints int
 * @xformat: valist
 */
void int_format(va_list xformat)
{
	printf("%d", va_arg(xformat, int));
}

/**
 * float_format - prints float
 * @xformat: valist
 */
void float_format(va_list xformat)
{
	printf("%f", va_arg(xformat, double));
}

/**
 * string_format - prints string
 * @xformat: valist
 */
void string_format(va_list xformat)
{
	char *str;

	str = va_arg(xformat, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - a variadiv function that prints anything
 * @format: is a specifier to which data type is going to be dealt with
 * Return: No return
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list xformat;

	dataType choose[] = {
		{'c', char_format},
		{'i', int_format},
		{'f', float_format},
		{'s', string_format},
		{'\0', NULL}
	};

	va_start(xformat, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;

		while (choose[i].specefier != '\0')
		{
			if (choose[i].specefier == format[j])
			{
				printf("%s", separator);
				choose[i].func(xformat);
				separator = ", ";
			}

			i++;
		}

		j++;
	}

	printf("\n");

	va_end(xformat);
}
