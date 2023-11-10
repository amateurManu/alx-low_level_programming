#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters together
 * @n: first arg to function
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_list ap;
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
