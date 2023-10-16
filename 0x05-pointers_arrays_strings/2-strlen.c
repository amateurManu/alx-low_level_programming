#include "main.h"

/**
 * _strlen - function that determines length of a string
 * @s: pointer to variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
