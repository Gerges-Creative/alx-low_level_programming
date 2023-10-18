#include "main.h"

/**
 * *_strncpy - copy an n characters from string src to dest
 *
 * @dest: the pointer that is src string is copied to
 * @src: the pointer that takes the string
 * @n: integer thar refers to the number of characters
 *
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
