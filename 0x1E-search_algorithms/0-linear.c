#include "search_algos.h"

/**
 * linear_search - algorithm that searches for a value using Linear Search
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	int a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < (int)size; a++)
	{
		printf("Value checked array[%u] = [%d]\n", a, array[a]);
		if (value == array[a])
			return (a);
	}
	return (-1);
}
