#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: input string
 * Return: number of characters in a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
