#include "main.h"

/**
 * print_array - print an n elements of an array
 *
 * @a: pointer to an array
 * @n: parameter that takes an integer
 *
 * Return: No return value
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (!(i == n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
