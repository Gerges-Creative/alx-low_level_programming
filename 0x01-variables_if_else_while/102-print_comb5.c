#include <stdio.h>

/* macro to create the if condition in the last loop */
#define CONDITION(a, b, c, d) (a == 9 && b == 8 && c == 9 && d == 9)

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* print out the combination of two two-digits*/
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					int x = a * 10 + b;
					int y = c * 10 + d;

					if (x < y)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');
					}

					if (!(CONDITION(a, b, c, d)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
