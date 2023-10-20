#include "main.h"

/**
 * *rot13 - using the encryption encoding rot12
 *
 * @rot: pointer char takes a string to encode
 *
 * Return: return the encoded string
 */
char *rot13(char *rot)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (rot[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (rot[i] == lower[j])
			{
				rot[i] = rot13[j];
				break;
			}
		}

		i++;
	}

	return (rot);
}
