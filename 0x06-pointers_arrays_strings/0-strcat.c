#include "main.h"

/**
 * *_strcat - concatenate two strings
 *
 * @dest: the pointer that is second string is appended to
 * @src: the pointer that takes the second string
 *
 * Return: return the dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, length = 0, j = 0;

	while (dest[lenght] != '\0')
	{
		length++;
	}

	for (i = 0; src[j] != '\0'; i++)
	{
		dest[length] = src[j];
		j++;
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
