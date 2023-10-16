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
	*a = *b;
	*b = *a;
}
