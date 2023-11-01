#include "main.h"

/**
 * alloc_grid - creates a two dimensional array of integers
 * @width: grid dimension
 * @height: grid dimension
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(arr[a]);
			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b <width; b++)
			arr[a][b] = 0;

	return (arr);
}
