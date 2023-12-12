#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at index
 * @n: pointer to an unsigned lont int
 * @index: bit to be changed
 *
 * Return: 1 (Success), -1 (Failed)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
