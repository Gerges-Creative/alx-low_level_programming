#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or not
 *
 * @c: parameter that take the input to be checked
 *
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
