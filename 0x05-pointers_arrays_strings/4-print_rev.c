#include "main.h"

/**
 * print_rev - pritns a stirng in reverse order
 *
 * @s: Pointer points to a string of type char
 *
 * Return: No return value
 */
void print_rev(char *s)
{
	char *length = s;

	char *r = s;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length > r)
	{
		_putchar(*length);
		length--;
	}

	_putchar('\n');
}
