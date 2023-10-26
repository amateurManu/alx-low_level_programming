#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: input string
 * Return: no value
 */

void _print_rev_recursion(char *s)
{
	_putchar(*s);
	*s--;

	if (*s != '\0')
		_print_rev_recursion(*s);
	else
		_putchar('\n');
}
