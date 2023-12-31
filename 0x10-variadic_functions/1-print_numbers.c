#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string separating numbers
 * @n: number of arguments
 * Return: no value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	if (separator)
	{
		va_list list;

		va_start(list, n);

		for (a = 0; a < n; a++)
		{
			printf("%d", va_arg(list, int));
			if (a < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(list);
	}
}
