#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: singly linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
