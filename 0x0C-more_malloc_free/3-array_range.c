#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: Value of array
 * @max: Value of array
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *c, i = 0;

	if (min > max)
		return (NULL);
	c = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (c == NULL)
		return (NULL);

	while (max >= min)
	{
		c[i] = min;
		i++;
		min++;
	}
	return (c);
}
