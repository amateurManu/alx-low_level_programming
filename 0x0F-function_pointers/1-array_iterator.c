#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each element
 * @array: input array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array)
	{
		if (action)
			for (a = 0; a < size; a++)
				action(array[a]);
	}
}
