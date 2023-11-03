#include <stdio.h>
#include <stdlib.h>

int checkdigit(char *s);

/**
 * main - multiply two positive numbers
 * @argc: args count
 * @argv: args vector
 * Return: result of mul
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (checkdigit(argv[1]) || checkdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}

/**
 * checkdigit - checks if argv is all digits or not
 * @s: string of digits
 * Return: 1 if there is a non-digit symbols otherwise 0
 */
int checkdigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (1);
		i++;
	}

	return (0);
}

/**
 * _atoi - convert a string of digits to integer
 * @s: string
 * Return: integer
 */
long _atoi(char *s)
{
	long count = 0, digits = 0;

	while (s[count] != '\0')
	{
		if (s[count] >= '0' && s[count] <= '9')
		{
			digits = digits * 10 + (s[count] - '0');
		}

		count++;
	}

	return (digits);
}
