#include "main.h"

/**
 * _strcmp - cmp the two strings
 * @a: string
 * @b: string
 * Return: 1 or 0
 */
int _strcmp(char *a, char *b)
{
	if (*a == '\0' && *b == '\0')
	{
		return (1);
	}

	if (*a == *b)
	{
		return (_strcmp(++a, ++b));
	}

	return (0);
}

/**
 * wildcmp - compare two strings together
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	return (_strcmp(s1, s2));
}
