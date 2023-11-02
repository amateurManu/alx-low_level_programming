#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++; min++)
		arr[a] = min;

	return (arr);
}
