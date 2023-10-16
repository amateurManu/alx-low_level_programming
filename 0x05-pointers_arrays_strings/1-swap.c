#include "main.h"

/**
 * swap_int - function that swaps the values of two ints
 *
 * @a: first pointer
 *
 * @b: second pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a; /* assign a to a variable first */
	*a = *b;
	*b = i;
}
