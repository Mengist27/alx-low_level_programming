#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate to new memory space location
 * @str: char
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *bbb;
	int j, r = 0;


	if (str == NULL)
	return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;
	bbb = malloc(sizeof(char) * (j + 1));
	if (bbb == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bbb[r] = str[r];
	return (bbb);
}
