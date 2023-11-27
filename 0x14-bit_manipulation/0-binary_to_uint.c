#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count, base;
	unsigned int un_int;

	un_int = 0;

	if (!b)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
		;

	for (count--, base = 1; count >= 0; count--, base *= 2)
	{
		if (b[count] != '1' && b[count] != '0')
			return (0);
		else if (b[count] & 1)
			un_int += base;
	}
	return (un_int);
}
