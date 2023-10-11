#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Sueccess)
 */
int main(void)
{
	/* create a loop to print a word using _putchar function */
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	putchar('\n');
	return (0);
}
