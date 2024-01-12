#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to end of list
 * @head: list head
 * @n: element value
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added;
	dlistint_t *h;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = added;
	}
	else
	{
		*head = added;
	}

	added->prev = h;

	return (added);
}
