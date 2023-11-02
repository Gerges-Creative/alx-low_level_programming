#include "main.h"

/**
 * argstostr - takes function arguments and concatenate them together
 * @ac: number of args
 * @av: pointer to args
 * Return: pointer to the new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
			j++;

		k += j;
	}

	str = (char *)malloc((k + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	k = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++, j++;
		}

		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
