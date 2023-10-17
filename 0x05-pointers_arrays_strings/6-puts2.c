#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: an input string
 * Return: no value
 */

void puts2(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0') /* terminate at the end of the string */
		{
			_putchar('\n');
			break;
		}

		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
}
