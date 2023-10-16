#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	int end, count = 0;

	while (*s)
		count++;  /* length of string */

	end = count - 1;

	for (i = end; i >= s[0]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
