#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head of a list
 * @idx: index where node will be added
 * @n: element
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int a;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && *head != NULL; a++)
			*head = *head->next;
	}

	if (*head == NULL && idx != 0)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	(*node).n = n;

	if (idx == 0)
	{
		(*node).next = *head;
		*head = node;
	}
	else
	{
		(*node).next = *head->next;
		*head->next = node;
	}

	return (node);
}
