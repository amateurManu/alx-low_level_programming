#include "lists.h"

/**
 * dlistint_len - returns number of elements in a list
 * @h: linked list head
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
