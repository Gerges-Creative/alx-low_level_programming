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
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int c = 0;

			while (c < 10)
			{
				int d = 0;

				while (d < 10)
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

						if (!(CONDITION(a, b, c, d)))
						{
							putchar(',');
							putchar(' ');
						}
					} d++;
				} c++;
			} b++;
		} a++;
	}

	putchar('\n');
	return (0);
}
