#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of linked node
 * @str: to be stored in the list
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t no_of_chars;
	list_t *start;

	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);

	(*start).str = strdup(str);

	for (no_of_chars = 0; str[no_of_chars]; no_of_chars++)
		;

	(*start).len = no_of_chars;
	(*start).next = *head;
	*head = start;

	return (*head);
}
