#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination for copied
 * @src: to be copied
 * @n: bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int = a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
