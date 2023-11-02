#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory in bytes to be allocated
 * Return: no value
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
