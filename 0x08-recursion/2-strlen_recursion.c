#include "main.h"

/**
 * _strlen_recursion - Calculate length of string
 * @s: the string value
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
