#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	char *s2 = s;
	int i = 0;
	int j = 0;

	while (1)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				s2[j] = s[i];
				i++;
				j++;
			}

			return (s2);
			break;
		}
		else if (s[i] == '\0')
		{
			return ('\0');
			break;
		}

		i++;
	}
}
