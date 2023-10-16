#include "main.h"

/**
 * _strlen - function that determines length of a string
 * @s: pointer to variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	int i = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	_putchar('\n');
	return (length);
}
