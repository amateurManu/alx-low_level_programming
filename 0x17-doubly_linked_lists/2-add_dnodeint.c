#include "lists.h"

/**
 * add_dnodeint - adds node at beginning of list
 * @head: list head
 * @n: element value
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added;
	dlistint_t *h;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	added->next = h;

	if (h != NULL)
		h->prev = added;

	*head = added;

	return (added);
}
