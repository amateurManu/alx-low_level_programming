#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string printed between strings
 * @n: number of arguments
 * Return: no value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		if (va_arg(list, char *))
			printf("%s", va_arg(list, char *));
		else
			printf("(nil)");

		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
