#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("1");

	for (i = 2; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);
}
