#include "main.h"

/**
 *  factorial - print the return factorial
 *  @n: Calculate the value of factorial
 *  Return: always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
