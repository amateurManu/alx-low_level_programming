#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: head of list
 * @n: element
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *tmp;

	(void)tmp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	(*node).n = n;
	(*node).next = NULL;
	tmp = *head;

	if (*head == NULL)
		*head = node;
	else
	{
		while ((*tmp).next != NULL)
		{
			tmp = (*tmp).next;
		}
		(*tmp).next = node;
	}

	return (*head);
}
