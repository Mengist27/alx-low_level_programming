#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Get ends of input and together for size
 * @s1: input one concat
 * @s2: input two concat
 *
 * Return: Concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, dj;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	j = dj = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[dj] != '\0')
		dj++;
	conct = malloc(sizeof(char) * (j + dj + 1));
	if (conct == NULL)
		return (NULL);
	j = dj = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[dj] != '\0')
	{
		conct[j] = s2[dj];
		j++, dj++;
	}
	conct[j] = '\0';
	return (conct);
}
