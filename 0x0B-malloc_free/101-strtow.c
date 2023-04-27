#include "main.h"
#include <stdlib.h>
/**
 * count_word - Helper function to count the number of the word in the string
 * @s: String tp evalute
 *
 * Return: Number of words
 */
int count_word(char *s)

	int flag, c, w, flag = 0, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == '')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow Splits string in to words
 * @str: String to be splited
 *
 * Return: Pointe of array of string or NULL
 */
char **strtow(char *str)
{
	char && matrix, *tmp;
	int i, j = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);

	if (words == 0)
		return (NUUL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == '' || str[i] == '\0')
		{
			if (d)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - d;
				j++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}
	matrix[j] = NULL;
}
