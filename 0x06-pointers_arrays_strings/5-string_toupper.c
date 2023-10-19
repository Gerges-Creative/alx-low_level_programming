#include "main.h"

/**
 * *string_toupper - to change all lowercase letters to uppercase
 *
 * Return: return the all uppercase string
 */
char *string_toupper(char *loca)
{
	int i = 0;

	while (loca[i] != '\0')
	{
		if (loca[i] >= 97 && loca[i] <= 122)
		{
			loca[i] = (loca[i] - 'a') + 'A';
		}

		i++;
	}

	return (loca);
}
