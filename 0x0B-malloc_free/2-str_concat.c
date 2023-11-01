#include "main.h"

/**
 * str_concat - concat two strings together and allocate them a new memory space
 * @s1: string
 * @s2: string
 * Return: one pointer to a whole string
 */
char *str_concat(char *s1, char *s2)
{
	char *strCon;
	int len1 = 0, len2 = 0, length = 0, i, j;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	length = len1 + len2;

	strCon = (char *)malloc(length * sizeof(char));

	if (strCon == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		j = 0;

		if (i < len1)
		{
			strCon[i] = s1[i];
		}
		else
		{
			strCon[i] = s2[j];
			j++;
		}
	}

	return (strCon);
}
