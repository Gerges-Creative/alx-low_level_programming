#include "main.h"

/**
 * _strcmp - compare two strings with each other
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return either positive or negative number or zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, x;

	while (1)
	{
		if (s1[i] == '\0'  && s2[i] == '\0')
		{
			return (0);
		}
		else if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			return (x);
		}

		i++;
	}
}
