#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: unsigned long int
 * @index: bit to be changed
 * Return: 1 (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
