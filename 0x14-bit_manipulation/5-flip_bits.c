#include "main.h"

/**
 * flip_bits - function that returns number of bits needed
 * to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int no_of_bits;

	for (no_of_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			no_of_bits++;
	}
	return (no_of_bits);
}
