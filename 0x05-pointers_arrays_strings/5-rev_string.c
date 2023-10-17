#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: an input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, a, b;

	char ch, *str;

	while (len >= 0)
	{
		if (s[len] != '\0')
			break;
		len++; /* word count */
	}
	str = s;

	for (a = 0; a < len; a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			ch = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = ch;
		}
	}
}
