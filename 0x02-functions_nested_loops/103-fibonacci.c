#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, fn, even, sum;

	for (i = 1; even < 4000000; i++)
	{
		fn = i + (i - 1);
		even = fn % 2;

		if (even  == 0)
		{
			sum += fn;
		}
	}
	printf("%d\n", sum);

	return (0);
}
