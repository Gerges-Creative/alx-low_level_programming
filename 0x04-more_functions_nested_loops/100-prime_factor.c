#include <stdio.h>

long is_prime(long num);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, factor;

	n = 612852475143;
	for (factor = 2; factor < n; factor++)
	{
		while (n % factor == 0)
		{
			n /= factor;
		}
	}

	printf("%ld\n", factor);

	return (0);
}
