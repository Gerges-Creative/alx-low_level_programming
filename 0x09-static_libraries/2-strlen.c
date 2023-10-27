#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: Pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int sum;

	sum = 0;

	while (*s != '\0')
	{
		sum = sum + 1;
		s++;
	}

	return (sum);
}
