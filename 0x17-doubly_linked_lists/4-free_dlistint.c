#include "lists.h"

/**
 * free_dlistint - to free a dlistint_t list.
 * @head: a pointer to the head of the list.
 * Return: Void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *check;

	start = head;

	while (start != NULL)
	{
		check = start->next;
		free(start);
		start = check;
	}
}

