#include "main.h"

/**
 * _abs - function compute absolute value
 *
 * @c: the number to be computed
 *
 * Return: Always c
 */
int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
