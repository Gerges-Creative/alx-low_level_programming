#include "main.h"

int is_separator(char s);

/**
 * *cap_string - CAPITALIZE all the words of a string
 *
 * @capw: pointer that takes a string
 *
 * Return: string with all its words caps
 */
char *cap_string(char *capw)
{
	int i = 0, capital = 0;

	while (capw[i] != '\0')
	{
		if (is_separator(capw[i]))
		{
			if (capw[i + 1] >= 'a' && capw[i + 1] <= 'z')
			{
				capital = 1;
			}
		}

		if (capital && capw[i] >= 97 && capw[i] <= 122)
		{
			capw[i] = (capw[i] - 'a') + 'A';
			capital = 0;
		}

		i++;
	}

	return (capw);
}

/**
 * is_separator - function that checks if letter is a separator
 *
 * @s: character input
 *
 * Return: return 1 if char is separatro or 0 if not
 */
int is_separator(char s)
{
	int i;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; sep[i] != '\0'; i++)
	{
		if (s == sep[i])
		{
			return (1);
		}
	}

	return (0);
}
