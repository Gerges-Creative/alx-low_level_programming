#include "main.h"

/**
 * print_chessboard - print the chessboard letter places
 *
 * @a: pointer array
 *
 * Retrun: no return value
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][0] == ' ')
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(s[i][j]);
			}
		}
	}
}
