#include "main.h"

/**
 * _strcat - function that appends one string to another
 * @dest: strings destination
 * @src: string to be appended to dest
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		des[i] = src[j];
		j++;

		des[i + 1] = '\0';
	}
	return (dest);
}
