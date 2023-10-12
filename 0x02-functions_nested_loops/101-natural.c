#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, sum3, sum5, sumAll, multiple3, multiple5;

	for (i = 1; sum3 < 1024; i++)
	{
		multiple3 = i * 3;
		sum3 += multiple3;
	}

	for (j = 1; sum5 < 1024; j++)
	{
		multiple5 = j * 5;
		sum5 += multiple5;
	}

	sumAll = sum3 + sum5;

	printf("%d\n", sumAll);

	return (0);
}
