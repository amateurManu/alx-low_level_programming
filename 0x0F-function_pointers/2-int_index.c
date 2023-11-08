#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: size of input array
 * @cmp: pointer to function used to compare values
 *
 * Return: 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (!cmp(array[i]))
				return (-1);
			else
				return (i);
	}
}
