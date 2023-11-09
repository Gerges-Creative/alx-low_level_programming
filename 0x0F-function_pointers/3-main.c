#include "3-calc.h"


/**
 * main - execute the code and check it
 * @argc: number of args
 * @argv: arg vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);

	 printf("%d\n", operation(num1, num2));

	return (0);
}
