#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *big = haystack, *small = needle;

	while (*haystack != '\0')
	{
		big = haystack, small = needle;

		while (*big == *small)
		{
			if ((*++small) == '\0')
			{
				return (haystack);
			}

			big++;
		}

		haystack++;
	}

	if (*small != '\0')
	{
		return ('\0');
	}
}
