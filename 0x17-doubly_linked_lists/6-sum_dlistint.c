#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head of the list.
 * Return: the total (sum) of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

