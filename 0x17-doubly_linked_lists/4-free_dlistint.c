#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list head
 *
 * Return: no value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
