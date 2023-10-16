#include "main.h"

/**
 * _strlen - function that determines length of a string
 * @s: pointer to variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	_putchar('\n');
	return (length);
}
