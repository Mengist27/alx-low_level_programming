#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Return index place if comparison true, else -1
 * @array: array
 * @cmp: pointers to function to be used to compare value
 * @size: size of elements in array
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
