#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pow2 = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			num += pow2;
		}

		pow2 *= 2;
		i--;
	}

	return (num);
}
