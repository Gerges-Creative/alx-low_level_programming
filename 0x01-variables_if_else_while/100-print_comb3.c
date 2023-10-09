#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* pirnt the combination of two different digits */
	int x = 0;
	int y = 0;

	while (x < 9)
	{
		y = 0;
		while (y < 10)
		{
			if (x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
				if (!(x == 8 && y == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}

	putchar('\n');
	return (0);
}
