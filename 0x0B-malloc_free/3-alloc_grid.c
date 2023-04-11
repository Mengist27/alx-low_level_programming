#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Nested loop to make grid
 * @width: inputs of width
 * @height: inputs of hieght
 * Return: Pointer to two dim. array
 */
int **alloc_grid(int width, int height)
{
	int **you;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);
	you = malloc(sizeof(int *) * height);

	if (you == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		you[y] = malloc(sizeof(int) * width);

		if (you[y] == NULL)
		{
			for (; y >= 0; y--)
				free(you[y]);
			free(you);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			you[y][z] = 0;
	}
	return (you);
}
