#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head of list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
