#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	/* While loop to print hexadecimal numbers */
	while (a < 17)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
