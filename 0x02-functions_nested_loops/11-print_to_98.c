#include "main.h"

/**
 * print_to_98 - prints out natural numbers from n to 98
 *
 * @n: parameter that takes in an integer
 *
 * Return: No return value is required
 */
void print_to_98(int n)
{
	printf("%d", n);

	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf(", %d", i);
		}

		printf("\n");
	}
	else if (n > 98)
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			printf(", %d", j);
		}

		printf("\n");
	}
}
