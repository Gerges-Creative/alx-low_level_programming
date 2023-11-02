#inlcude "main.h"

/**
 * strlen - count the length of a string
 * @s: string
 * Return: int number of length
 */
int strlen(char *s)
{
	int len = 0;

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
	char *strcat;
	int len1, len2, length, i, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

	length = len1 + n + 1;

	strcat = malloc(sizeof(*strcat) * length);

	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		if (i < len1)
			strcat[i] = s1[i];
		else if (j < n)
		{
			strcat[i] = s2[j];
			j++;
		}
	}

	strcat[i] = '\0';

	return (strCon);
}
