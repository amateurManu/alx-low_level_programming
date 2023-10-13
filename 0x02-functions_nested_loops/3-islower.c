#include <stdio.h>
#include "main.h"

/**
 * _islower - Check Description
 * @c: An input character
 * Description: function uses _putchar to print a number
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}

	return (lower);
}
