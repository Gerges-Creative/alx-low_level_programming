#include "main.h"

/**
 * _atoi - takes the first block of number it finds in a string and convert
 * it to an integer
 *
 * @s: pointer to the string
 *
 * Return: return the found number
 */
int _atoi(char *s)
{
	unsigned int count = 0, digits = 0, posNeg = 1;

	while (s[count] != '\0')
	{
		if (s[count] == '-')
		{
			posNeg *= -1;
		}
		else if (s[count] >= '0' && s[count] <= '9')
		{
			digits = digits * 10 + (s[count] - '0');
		}
		else if (digits > 0)
		{
			break;
		}

		count++;
	}

	return (digits * posNeg);
}
