#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, fn;

	printf("1, 2");

	for (i = 1; i < 51; i++)
	{
		fn = i + (i - 1);

		printf(", %d", fn);
	}

	printf("\n");

	return (0);
}
