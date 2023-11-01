#include "main.h"

/**
 * _strdup - duplicates a string and allocate it to new place in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *strdup = str;
	int i, length;

	if (*str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *str != '\0'; str++)
	{
		length++;
	}

	strdup = (char *)malloc(length * sizeof(char));

	if (strdup == NULL)
	{
		return (NULL);
	}

	free(strdup);

	return (strdup);
}
