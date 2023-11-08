#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: to be printed
 * @f:
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		if (f)
			f(name);
	}
}
