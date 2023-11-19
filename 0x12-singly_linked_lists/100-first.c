#include "lists.h"

/**
 * startup - Apply the constructor attribute to startup() so that it
 *   is executed before main()
 */
void startup(void) __attribute__ ((constructor));

/**
 * startup - prints a string before the main function is executed
 * Return: NO return
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
