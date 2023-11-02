#include "main.h"

/**
 * strlen - count the length of a string
 * @s: string
 * Return: int number of length
 */
int mystrlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * string_nconcat - concatenate two strings together by a n bytes from the
 * second string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strConcat;
	unsigned int len1, len2, length, i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = mystrlen(s1);
	len2 = mystrlen(s2);

	if (n > len2)
		n = len2;

	length = len1 + n + 1;

	strConcat = malloc(sizeof(*strConcat) * length);

	if (strConcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length - 1; i++)
	{
		if (i < len1)
			strConcat[i] = s1[i];
		else if (j < n)
		{
			strConcat[i] = s2[j];
			j++;
		}
	}

	strConcat[i] = '\0';

	return (strConcat);
}
