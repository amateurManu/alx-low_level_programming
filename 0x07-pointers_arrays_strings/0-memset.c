#include "main.h"

/**
 * _memset - fills first n bytes of memory pointed to by s with b
 * @s: to be modified
 * @b: chars to modify s
 * @n: number of bytes of b to modify s
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
