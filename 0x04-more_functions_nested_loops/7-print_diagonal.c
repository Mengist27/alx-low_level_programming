#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1 ; j <= n ; j++)
		{
			for (k = 1 ; k <= j ; k++)
			{
				_putchar(' ');
			}
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}

