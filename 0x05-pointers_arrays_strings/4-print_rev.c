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

	while (*length != '\0')
	{
		length++;
	}

	length--;

	while (length >= s)
	{
		_putchar(*length);
		length--;
	}

	_putchar('\n');
}
