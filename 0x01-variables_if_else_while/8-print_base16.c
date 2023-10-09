#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char a = 'a';

	/* While loop to print hexadecimal numbers */
	while (n <= 9)
	{
		putchar(n);
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
