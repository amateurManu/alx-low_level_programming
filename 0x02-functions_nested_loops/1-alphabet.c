#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lower case followed by a new line
 * Return: Void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
