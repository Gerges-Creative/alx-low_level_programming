#include "main.h"

/**
 * _strdup - duplicates a string and allocate it to new place in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *strdup;
	int length = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[length] != '\0'; length++)
	{
	}

	strdup = (char *)malloc((length + 1) * sizeof(char));

	if (strdup == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < length; i++)
	{
		strdup[i] = str[i];
	}

	strdup[i] = '\0';

	return (strdup);
}
