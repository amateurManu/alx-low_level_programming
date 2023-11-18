#include "lists.h"

/**
 * add_node_end - adds a new node at end of list
 * @head: head of linked list
 * @str: string to store in list
 * Return: address of added element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t no_chars;
	list_t *added, *temp;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	added->str = strdup(str);

	for (no_chars = 0; str[no_chars]; no_chars++)
		;

	added->len = no_chars;
	added->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = added;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = added;
	}

	return (*head);
}
