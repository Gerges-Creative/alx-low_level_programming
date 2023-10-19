#include "main.h"

/**
 * *leet - an encryption code to change the letter a, e, o, t, l and their
 * uppercase version to 4, 3, 0, 1, 7 respectively
 *
 * @c: pointer char that checks string
 *
 * Return: return the encrypted string
 */
char *leet(char *c)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	int i = 0, j;

	while (c[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == lower[j] || c[i] == upper[j])
			{
				c[i] = num[j];
			}
		}

		i++;
	}

	return (c);
}
