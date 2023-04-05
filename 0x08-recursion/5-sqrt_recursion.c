#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - prints the return of natural square root
 * @n: the numbers calculate the natural square rot
 *
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - prints natural square root
 * @n: number to be calculate the square root
 * @i: Iterate the numbers
 * Return: Natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
