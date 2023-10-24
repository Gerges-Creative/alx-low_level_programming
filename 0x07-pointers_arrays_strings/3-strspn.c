#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, countByte = 0, bool;

	while (s[i] != '\0')
	{
		bool = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				countByte++;
				bool = 1;
			}
		}

		if (bool == 0)
		{
			break;
		}

		i++;
	}

	return (countByte);
}
