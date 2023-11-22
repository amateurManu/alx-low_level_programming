#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a list
 * @head: head of a list
 * @index: index of node to be deleted
 *
 * Return: 1 for success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before;
	listint_t *after;
	unsigned int a;

	before = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && before != NULL; a++)
			before = (*before).next;
	}

	if (before == NULL || ((*before).next == NULL && index != 0))
	{
		return (-1);
	}

	after = (*before).next;

	if (index != 0)
	{
		(*before).next = (*after).next;
		free(after);
	}
	else
	{
		free(before);
		*head = next;
	}

	return (1);
}
