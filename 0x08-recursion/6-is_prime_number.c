#include "main.h"

/**
 * check_prime - check any number that can devise the prime
 * @n: number
 * @devisor: the devisor of n
 * Return: 0 or 1
 */
int check_prime(int n, int devisor)
{
	if (n == devisor)
	{
		return (1);
	}

	if (n % devisor == 0)
	{
		return (0);
	}

	return (check_prime(n, ++devisor));
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number
 * Return: 1 if prime or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (check_prime(n, 3));
}
