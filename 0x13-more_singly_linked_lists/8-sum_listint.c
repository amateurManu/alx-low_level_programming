#include "lists.h"

/**
 * sum_listint - sums all data in a list
 * @head: head of list
 *
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum_all;

	sum_all = 0;
	while (head != NULL)
	{
		sum_all += (*head).n;
		head = (*head).next;
	}

	return (sum_all);
}
