#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexadecimal[] = "0123456789abcdef";
	int a = 0;

	/* While loop to print hexadecimal numbers */
	while (a < 17)
	{
		putchar(hexadecimal[a]);
		a++;
	}
	/*putchar('\n');*/
	return (0);
}
