#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the programs
 * @argc: Number of arguement
 * @argv: array of arguements
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
