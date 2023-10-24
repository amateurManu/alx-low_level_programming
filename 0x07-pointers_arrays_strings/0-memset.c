#include "main.h"

/**
 * _memset - fills first n bytes of memory pointed to by s with b
 * @s: to be modified
 * @b: chars to modify s
 * @n: number of bytes of b to modify s
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
