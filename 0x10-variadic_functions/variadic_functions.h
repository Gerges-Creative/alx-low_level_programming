#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct dt - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct all
{
	char specefier;
	void (*func)(va_list);
} dataType;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
