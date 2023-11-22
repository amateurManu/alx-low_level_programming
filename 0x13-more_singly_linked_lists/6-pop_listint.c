#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 *
 * Return: data of deleted head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *a;
	int node;

	if (*head == NULL)
		return (0);

	current = *head;

	node = (*current).n;

	a = (*current).next;

	free(current);

	*head = a;

	return (node);
}
