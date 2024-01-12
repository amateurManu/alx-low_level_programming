#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: list head
 * @idx: index in list to add new node
 * @n: node to be added
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head;
	dlistint_t *added;
	unsigned int a;

	added = NULL;
	if (idx == 0)
		added = add_dnodeint(h, n);
	else
	{
		head = *h;
		a = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (a == idx)
			{
				if (head->next == NULL)
					added = add_dnodeint_end(h, n);
				else
				{
					added = malloc(sizeof(dlistint_t));
					if (added != NULL)
					{
						added->n = n;
						added->next = head->next;
						added->prev = head;
						head->next->prev = added;
						head->next = added;
					}
				}
				break;
			}
			head = head->next;
			a++;
		}
	}
	return (added);
}
