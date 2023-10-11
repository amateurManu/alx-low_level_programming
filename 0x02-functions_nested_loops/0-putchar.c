#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";

	int p;

	for (p = 0; p <= 7; p++)
	{
		_putchar(word[p]);
	}
	_putchar('\n');
	return (0);
}
