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
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);

		if (str[x + 1] == '\0')
		{
			break;
		}

		x += 2;
	}

	_putchar('\n');
}
