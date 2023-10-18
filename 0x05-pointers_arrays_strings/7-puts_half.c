#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: an input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int length = 0, n, i;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if ((length - 1) % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	for (i = n; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
