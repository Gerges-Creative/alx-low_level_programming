#include "main.h"

/**
 * swap_int - swaps the values of two integers with each other
 *
 * @a: Pointer a
 * @b: Pointer b
 *
 * Return: No return value
 */
void swap_int(int *a, int *b)
{
	int a2b;
	
	a2b = *b;
	*b = *a;
	*a = a2b;
}
