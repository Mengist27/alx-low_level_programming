#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, l = 0;
	unsigned long int recent;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		recent = exclusive >> b;
		if (recent & 1)
			l++;
	}
	return (l);
}

