#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments passed to function
 * Return: no value
 */

void print_all(const char * const format)
{
	unsigned int a = 0, b, c = 0;
	char *s;
	const char args[] = "cifs";

	va_list list;

	va_start(list, format);
	while (formart && format[a])
	{
		b = 0;
		while (args[b])
		{
			if (format[a] == args[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), c = 1;
				break;
			case 's':
				s = va_arg(list, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} a++;
	}
	printf("\n");
	va_end(list);
}
