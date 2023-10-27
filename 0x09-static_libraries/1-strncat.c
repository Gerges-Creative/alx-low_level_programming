#include "main.h"

/**
 * *_strncat - concatenate two strings till a certian point n
 *
 * @dest: the pointer that is second string is appended to
 * @src: the pointer that takes the second string
 * @n: integer thar refers to the number of bytes
 *
 * Return: return the dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';

	return (dest);
}
