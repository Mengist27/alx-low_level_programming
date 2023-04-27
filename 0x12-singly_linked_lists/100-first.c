#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints the sentences befor main functions executed
 *
 * Return: Always 0
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
