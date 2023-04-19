#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers
 * @a: The first number
 * @b: The second Number
 *
 * Return: the sum of and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The difference number
 * @a: The first number
 * @b: The second Number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Prints  The product of two numbers
 * @a: The first number
 * @b: The second Number
 * Return: The multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Prints the divission of two numbers
 * @a: The first number
 * @b: The second Number
 * Return: The divission of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Prints the module of two numbers
 * @a: The first number
 * @b: The second Number
 * Return: The module of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
