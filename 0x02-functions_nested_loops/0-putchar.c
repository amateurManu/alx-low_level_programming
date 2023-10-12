#include <stdio.h>
#include "main"

/**
 * print_string - prints the string "_putchar" followed by a new line
 * Return: void
 */

void print_string(void)
{
	char str[] = "_putchar\n";
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
}

/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	print_string();
	return (0);
}
