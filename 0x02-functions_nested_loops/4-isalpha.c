#include "main.h"

/**
 * _isalpha - function checks if a letter is lower or upper or anything else
 *
 * @c: function parameter
 *
 * Return: 1 if lower or upper and 0 if anything else
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		reutrn (0);
	}

	_putchar('\n');
}