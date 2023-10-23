#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src:source string to be appended
 * @n: most bytes from src
 * Return: value of n
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	if (src[b] < n)
	{
		dest[a] = '\0';
	}
	return (dest);
}
