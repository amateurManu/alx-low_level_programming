#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
