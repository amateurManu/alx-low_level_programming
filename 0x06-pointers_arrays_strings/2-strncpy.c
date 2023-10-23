#include "main.h"

/**
 * _strncpy - copies src to dest but up to length n
 * @dest: destination for copied string
 * @src: string to be copied
 * @n: number of characters of src to be copied
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n)
	{
		if (src[a] != '\0')
			dest[a] = src[a];
		else
			dest[a] = '\0';

		a++;
	}
	return (dest);
}
