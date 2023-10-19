#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "\nExpect the bestPrepare for the worst. Capitalize on what "
		"comes.\nhello{world}!hello-world 0123456hello world\thello "
		"world. hello) world\n"
		"!Expect,The.Best 24526prepare\tfor;the?worst\"capitalize(on)what{comes}hello World\n\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
