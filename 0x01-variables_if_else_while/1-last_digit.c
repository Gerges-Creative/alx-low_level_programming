#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* N macro */
#define N "Last digit of"
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * First we calculate the last digit of the number then print it
	 * along with the number itself
	 */
	digit = n % 10;
	if (digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", N, n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("%s %d is %d and is than 6 and not 0\n", N, n, digit);
	}
	else
	{
		printf("%s %d is %d and is 0\n", N, n, digit);
	}
	return (0);
}
