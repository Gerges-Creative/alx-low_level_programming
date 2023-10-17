#include "main.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str: pointer that takes a string
 *
 * Return: No return value
 */
void puts_half(char *str)
{
	int i, j, length;
	char *half = str;

	length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	j = length / 2;

	if (length % 2 != 0)
	{
		j = (length / 2) + 1;
	}

	for (i = j; i < length; i++)
	{
		_putchar(half[i]);
	}

	_putchar('\n');
}
