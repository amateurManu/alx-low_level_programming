#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, s;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			if (f != s)
			{
				putchar(f);
				putchar(s);

				if (f == '8' && s == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
