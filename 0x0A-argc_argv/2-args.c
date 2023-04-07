#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument number
 * @argv: array argument
 * Return: always0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
