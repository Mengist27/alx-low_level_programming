#include "main.h"

/**
 * print_last_digit - prints the last digit of a  number
 *
 * @n: The number to be treated
 *
 * Return: k
 */

int print_last_digit(int c)
{
	int k;

	k = c % 10;
	if (c < 0)
		k = -1;
	return (k);
}
