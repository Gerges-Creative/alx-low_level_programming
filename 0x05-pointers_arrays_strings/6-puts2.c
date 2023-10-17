#include "main.h"

/**
 * puts2 - print every other character from a string
 *
 * @str: pointer that takes the string
 *
 * Return: No return value
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}

	_putchar('\n');
}
