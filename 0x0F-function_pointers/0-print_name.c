#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: pointer to function that return nothing and take char argument
 * Return: No Return
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
