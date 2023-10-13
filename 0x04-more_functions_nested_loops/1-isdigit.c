#include "main.h"
/**
 * _isdigit - Check description
 * @c: An input character to be checked
 * Description: The function checks if input is a digit
 * Return: 1 if digit is encountered and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
