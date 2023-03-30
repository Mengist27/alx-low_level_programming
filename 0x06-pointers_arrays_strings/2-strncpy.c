#include "main.h"

/**
 * _strncpy - copies of string
 * @dest: destination string
 * @src: source of string
 * @n: number of string
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
