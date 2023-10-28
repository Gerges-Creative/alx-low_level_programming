#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the number of coins of change
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int change, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	while (change > 0)
	{
		if (change >= 25)
		{
			coins += (change / 25);
			change = change % 25;
		}

		if (change >= 10)
		{
			coins += (change / 10);
			change = change % 10;
		}

		if (change >= 5)
		{
			coins += (change / 5);
			change = change % 5;
		}

		if (change >= 2)
		{
			coins += (change / 2);
			change = change % 2;
		}

		if (change >= 1)
		{
			coins += (change / 1);
			change = change % 1;
		}
	}

	printf("%d\n", coins);

	return (0);
}
