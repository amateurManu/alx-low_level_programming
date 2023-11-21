#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of list
 * @head: head of a list
 * @n: element
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	(*node).n = n;
	(*node).next = *head;
	*head = node;

	return (*head);
}
