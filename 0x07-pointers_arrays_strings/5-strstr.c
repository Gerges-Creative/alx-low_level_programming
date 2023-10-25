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
	char *big = haystack, *needle2;

	while (*haystack != '\0')
	{
		big = haystack;
		needle2 = needle;

		while (*big == *needle2 && *big != '\0' && *needle2 != '\0')
		{
			big++;
			needle2++;
		}
		if (*needle2 == '\0')
		{
			return (haystack);
		}

		haystack = big + 1;
	}

	return ('\0');
}
