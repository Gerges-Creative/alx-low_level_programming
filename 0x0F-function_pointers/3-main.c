#include "function_pointers.h"

#define ARG (argv[2] != '+' || argv[2] != '-'|| argv[2] != '*')

/**
 * main - execute the code and check it
 * @argc: number of args
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (ARG || argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		return (99);
	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);

	get_op_func( argv[2])(num1, num2);

	return (0);
}
