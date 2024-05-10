#include "search_algos.h"

/**
 * recursive_search - searches for a value using Binary search
 * @array: array to perform search
 * @size: array size
 * @value: value to search for
 * Return: index of value
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (a = 0; a < size; a++)
		printf("%s %d", (a == 0) ? ":" : ",", array[a]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls recursive_search to return index of value
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of value
 */

int binary_search(int *array, size_t size, int value)
{
	int i;

	i = recursive_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
