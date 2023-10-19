#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what"
		"comes.\nhello{world}!hello-world 0123456hello world\thello"
		"world.(hello) world\n"
		"!expect,the.best prepare\tfor;the?worst\"capitalize(on)what{comes}hello world";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
