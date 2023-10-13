#include "main.h"

/**
 * _isupper - Check description
 * @c: Input character
 * Description: function checks if input character is in uppercase
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char upper;
	int value;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
