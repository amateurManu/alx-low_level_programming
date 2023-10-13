#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check Description
 * Description: function prints alphabet in lower case 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(i);
		_putchar('\n');
	}
}
