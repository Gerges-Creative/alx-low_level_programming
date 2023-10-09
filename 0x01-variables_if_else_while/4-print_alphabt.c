#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* create a loop that prints the alphabet in lowercase */
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
