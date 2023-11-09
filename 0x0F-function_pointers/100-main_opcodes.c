#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of the main function
 * @argc: number of args
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes;
	char *mainAddress = (char *) main;

	bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (bytes > 0)
	{
		printf("%02hhx", *mainAddress);

		if (bytes > 1)
			printf(" ");

		mainAddress++;
		bytes--;
	}

	printf("\n");

	return (0);
}
