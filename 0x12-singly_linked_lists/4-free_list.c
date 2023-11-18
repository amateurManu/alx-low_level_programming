#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of linked list
 * Return: no value
 */

void free_list(list_t *head)
{
	list_t *a;

	while ((a = head) != NULL)
	{
		head = head->next;
		free(a->str);
		free(a);
	}
}
