#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 *
 * Return: no value
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = (*current).next;
			free(tmp);
		}
		*head = NULL;
	}
}
