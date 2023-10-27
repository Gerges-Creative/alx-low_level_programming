#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
