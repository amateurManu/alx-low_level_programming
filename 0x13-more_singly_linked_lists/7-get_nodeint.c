#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node in list
 * @head: head of list
 * @index: index of node
 * Return: nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
		head = (*head).next;

	return (head);
}
