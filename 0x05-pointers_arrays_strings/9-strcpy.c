#include "main.h"

/**
 * _strcpy - copies  a string
 * @dest: destination for copied string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (len >= 0)
	{
		dest[len] = src[len];
		if (src[len] == '\0')
			break;
		len++;
	}
	return (dest);
}
