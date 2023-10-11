#include "main.h"

/**
 * print_alphabet_x10 - utilise the use of function _putchar
 * to print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char x;

	for (x = 1; x <= 10; x++)
	{
		char y;

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}

		_putchar('\n');
	}
}
