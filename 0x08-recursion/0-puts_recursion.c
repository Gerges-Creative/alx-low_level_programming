#include "main.h"

/**
 * puts_recursion - printing a string using recursion
 *
 * @s: string
 *
 * Return: no return value
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
	}

	_putchar(*s);
	s++;

	_puts_recursion(s);
}
