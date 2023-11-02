#include "main.h"

/**
 * strtow - split a string into words
 * @str: string
 * Return: pointer to an array of strigs
 */
char **strtow(char *str)
{
	char **strofw;
	int i = 0, j = 0, k;

	if (str == "" || str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		if (!(str[i] != " " && str[i] != '\t'))
		{
			k = 0;
			while (1)
			{
				if (str[i] == " " || str == '\t')
					break;
				strofw[j][k] = str[i];
				i++, k++;
			}
			strofw[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	return (strofw);
}
