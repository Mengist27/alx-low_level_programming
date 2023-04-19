#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints name using pointer to fumction
 * @name: Strings to add
 * @f: Pointer to function
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
