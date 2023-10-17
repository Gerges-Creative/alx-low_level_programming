#include "main.h"

/**
 * *_strcpy - copies a string from one pointer to another
 *
 * @dest: pointer that recives the string copy
 * @src: pointer that take the string to be copied
 *
 * Return: return pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (*src != '\0')
	{
		length++;
		src++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i <= length)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
