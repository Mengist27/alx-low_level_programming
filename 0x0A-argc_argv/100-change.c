#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Print the minimum numbers of the coin change amounts
 * @argc: Numbers of argument
 * @argv: array of argument
 * Return: 0 ( success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, k, result;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coin[k])
		{
			result++;
			num -= coin[k];
		}
	}
	printf("%d\n", result);
	return (0);
}
