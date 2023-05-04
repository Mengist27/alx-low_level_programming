#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		val = 2 * val + (b[m] - '0');
	}

	return (val);
}

