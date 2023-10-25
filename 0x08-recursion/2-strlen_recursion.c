#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *
 * @s: string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);
	}
}
