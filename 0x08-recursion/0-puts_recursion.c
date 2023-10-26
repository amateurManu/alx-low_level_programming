#include "main.h"

/**
 * _puts_recursion - prints string followed by a new line
 * @s: input string
 * Return: no value
 */

void _puts_recursion(char *s)
{
	_putschar(*s);
	*s++;

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
		_puts_recursion('\n');
}
