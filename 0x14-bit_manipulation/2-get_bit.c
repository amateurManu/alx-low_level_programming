#include "main.h"

/**
 * get_bit - function that returns value of bit at given index
 * @n: unsigned long integer
 * @index: value to be returned
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index < 64 && n == 0)
		return (0);

	for (a = 0; a <= 63; a >>= 1, a++)
	{
		if (index == 1)
			return (n & 1);
	}

	return (-1);
}
