#include "main.h"

/**
 * reverse_array - takes an array and reverse its content
 *
 * @a: ponter to the array
 * @n: integer of the number of elements
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = 0, temp;

	while (i < n - 1)
	{
		i++;
	}

	while (i >= j)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;

		i--;
		j++;
	}
}
