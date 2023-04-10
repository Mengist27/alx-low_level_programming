#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of the size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: Create array of size and assign char c
 * Return: Pointer to array, NLL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
