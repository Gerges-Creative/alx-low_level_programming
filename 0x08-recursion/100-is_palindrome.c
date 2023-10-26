#include "main.h"
/**
 * palindrome_cmp - compare the first letter with the last letter and so on
 * @left: porceeds the string from the left side
 * @right: proceeds the string from the right side
 * Return: if the letters match together return 1 otherwise 0
 */
int palindrome_cmp(char *left, char *right)
{
	/* here cmp the postions of the elements */
	if (left >= right)
	{
		return (1);
	}
	/* here cmp the value of the letters */
	if (*left == *right)
	{
		return (palindrome_cmp(++left, --right));
	}

	return (0);

}

/**
 * _strlen - calculates the length of the string
 * @c: string
 * Return: length of the string
 */
int _strlen(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	/* here add 1 with every return when you execute the function */
	return (1 + _strlen(++c));
}

/**
 * is_palindrome - check if a string is palindrome or not
 * palindrome means that the string remains the same on reading
 * from both ends.
 *
 * @s: string
 * Return: 1 if it's palindrome else 0
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (palindrome_cmp(s, (s + length - 1)));
}
