#include "main.h"

/**
 * _islower - checks if a letter is lowercase or not
 *
 * @c: is an int parameter to be replaced by a letter
 *
 * Return: 0 if uppercase or 1 if lowercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');

}
