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
	int count = 0, sizeNum = 0, digits = 0, posNeg = 1, multi = 0, i;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) > 9 || *(s + count) < 0) && sizeNum > 0)
		{
			break;
		}

		if (*(s + count) == '-')
		{
			posNeg *= -1;
		}

		if (*(s + count) >= 0 && *(s + count) <= 9)
		{
			if (sizeNum > 0)
			{
				multi *= 10;
			}

			sizeNum++;
		}

		count++;
	}

	for (i = count - sizeNum; i < count; i++)
	{
		digits += (s[i] + '0') * multi;
		multi /= 10;
	}

	return (digits * posNeg);
}
