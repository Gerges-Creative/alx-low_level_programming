#include "main.h"

/**
 * rev_string - print an array of char but reverse its elements so a[0] to [10]
 *
 * @s: Pointer
 *
 * Return: No return value
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char *rev = s;
	int j;

	while (s[length] != '\0')
	{
		length++;
	}

/*	length--;*/
	j = length;

	while (j >= 0)
	{
		char temp = rev[i];

		rev[i] = s[j];
		rev[j] = temp;
/*		_putchar(rev[i]);*/
		i++;
		j--;
	}
}
