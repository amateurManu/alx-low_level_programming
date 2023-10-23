#include "main.h"

/**
 * _strcat - function that appends one string to another
 * @dest: strings destination
 * @src: string to be appended to dest
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
